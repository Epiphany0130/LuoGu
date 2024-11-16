//P1075 [NOIP2012 普及组] 质因数分解
/*
题目描述
已知正整数 n 是两个不同的质数的乘积，试求出两者中较大的那个质数。

输入格式
输入一个正整数 n。

输出格式
输出一个正整数 p，即较大的那个质数。

输入输出样例
输入 #1
21
输出 #1
7

说明/提示
1≤n≤2×10⁹
NOIP 2012 普及组 第一题
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++)
		if(n % i == 0) {		//最小因数 * 最大因数，找到最小因数直接输出其对应的因数即可
			cout << n / i;
			break;
		}
	return 0;
}