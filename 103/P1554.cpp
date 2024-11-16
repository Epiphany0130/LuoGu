//P1554 梦中的统计
/*
题目背景
Bessie 处于半梦半醒的状态。过了一会儿，她意识到她在数数，不能入睡。

题目描述
Bessie 的大脑反应灵敏，仿佛真实地看到了她数过的一个又一个数。她开始注意每一个数码（0…9）：每一个数码在计数的过程中出现过多少次？

给出两个整数 M 和 N，求在序列 [M,M+1,M+2,…,N−1,N] 中每一个数码出现了多少次。

输入格式
第 1 行: 两个用空格分开的整数 M 和 N。

输出格式
第 1 行: 十个用空格分开的整数，分别表示数码 0…9 在序列中出现的次数。

输入输出样例
输入 #1
129 137
输出 #1
1 10 2 9 1 1 1 1 0 1

说明/提示
数据保证，1≤M≤N≤2×10⁹，N−M≤5×10^5
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int m, n, num;
	int count[10] = {};
	cin >> m >> n;
	for(int i = m; i <= n; i++) {
		num = i;
		while(num) {
			count[num % 10]++;
			num /= 10;
		}
	}
	for(int i = 0; i < 10; i++)
		cout << count[i] << " ";
	cout << endl;
	return 0;
}