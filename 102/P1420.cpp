//P1420 最长连号
/*
题目描述
输入长度为 n 的一个正整数序列，要求输出序列中最长连号的长度。
连号指在序列中，从小到大的连续自然数。

输入格式
第一行，一个整数 n。
第二行，n 个整数 ai，之间用空格隔开。

输出格式
一个数，最长连号的个数。

输入输出样例
输入 #1
10
1 5 6 2 3 4 5 6 8 9
输出 #1
5

说明/提示
数据规模与约定对于 100% 的数据，保证 1≤n≤10⁴，1≤ai≤10⁹
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n, anum, counti,countmax;
	cin >> n;
	vector<long long> a, count(n, 1);
	for(long long i = 0; i < n; i++) {
		cin >> anum;
		a.push_back(anum);
	}
	counti = 0;
	for(long long i = 0; i < n; i++) {
		if(a[i+1] - a[i] == 1)
			count[counti]++;
		if(a[i+1] - a[i] != 1)
			counti++;
	}
	countmax = count[0];
	for(long long i = 0; i <= counti; i++)
		if(countmax < count[i])
			countmax = count[i];
	cout << countmax << endl;
	return 0;
}