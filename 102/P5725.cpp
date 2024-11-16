//P5725 【深基4.习8】求三角形
/*
题目描述
模仿例题，打印出不同方向的正方形，然后打印三角形矩阵。中间有个空行。

输入格式
输入矩阵的规模，不超过 9。

输出格式
输出矩形和正方形

输入输出样例
输入 #1
4
输出 #1
01020304
05060708
09101112
13141516

      01
    0203
  040506
07080910
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, num = 1;
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			printf("%02d", num++);
		cout << endl;
	}
	cout << endl;
	num = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i - 1; j++)
			cout << "  ";
		for(int k = 0; k < 1 + i; k++)
			printf("%02d", num++);
		cout << endl;
	}
	return 0;
}