//P5722 【深基4.例11】数列求和
/*
题目描述
计算 1+2+3+⋯+(n−1)+n 的值，其中正整数 n 不大于 100。由于你没有高斯聪明，所以你不被允许使用等差数列求和公式直接求出答案。

输入格式
输入一个正整数 n。

输出格式
输出一个正整数，表示最后求和的答案。

输入输出样例
输入 #1
100
输出 #1
5050

说明/提示
数据保证，1≤n≤100。
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) 
		sum += i;
	cout << sum << endl;
	return 0;
}