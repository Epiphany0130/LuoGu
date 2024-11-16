//P5724 【深基4.习5】求极差 / 最大跨度值
/*
题目描述
给出 n 和 n 个整数 ai ，求这 n 个整数中的极差是什么。极差的意思是一组数中的最大值减去最小值的差。

输入格式
第一行输入一个正整数 n，表示整数个数。
第二行输入 n 个整数 a1, a2, a3, ..., an，以空格隔开。

输出格式
输出一个整数，表示这 n 个整数的极差。

输入输出样例
输入 #1
6
4 1 5 1 4 1
输出 #1
4

说明/提示
数据保证，1≤n≤100，0≤ai≤1000。
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, anum, max, min;
	vector<int> a;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> anum;
		a.push_back(anum);
	}
	max = min = a[0];
	for(int i = 0; i < n; i++)
		if(a[i] > max)
			max = a[i];
		else if(a[i] < min)
			min = a[i];
	cout << max - min << endl;
	return 0;
}