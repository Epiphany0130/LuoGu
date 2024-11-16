//P5727 【深基5.例3】冰雹猜想
/*
题目描述
给出一个正整数 n，然后对这个数字一直进行下面的操作：如果这个数字是奇数，那么将其乘 3 再加 1，否则除以 2。
经过若干次循环后，最终都会回到 1。经过验证很大的数字（7×10^11）都可以按照这样的方式比变成 1，所以被称为“冰雹猜想”。
例如当 n 是 20，变化的过程是 20→10→5→16→8→4→2→1。
根据给定的数字，验证这个猜想，并从最后的1 开始，倒序输出整个变化序列。

输入格式
输入一个正整数 n。

输出格式
输出若干个由空格隔开的正整数，表示从最后的 1 开始倒序的变化数列。

输入输出样例
输入 #1
20
输出 #1
1 2 4 8 16 5 10 20

说明/提示
数据保证，1≤n≤100。
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, count = 1;
	vector<int> a;
	cin >> n;
	a.push_back(n);
	while(n != 1) {
		if(n % 2)
			n = n * 3 + 1;
		else
			n /= 2;
		a.push_back(n);
	}
	for(int i = a.size() - 1; i >= 0; i--)
		cout << a[i] << " ";
	return 0;
}