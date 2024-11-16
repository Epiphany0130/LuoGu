//P5726 【深基4.习9】打分
/*
题目描述
现在有 n(n≤1000) 位评委给选手打分，分值从 0 到 10。
需要去掉一个最高分，去掉一个最低分（如果有多个最高或者最低分，也只需要去掉一个），剩下的评分的平均数就是这位选手的得分。
现在输入评委人数和他们的打分，请输出选手的最后得分，精确到 2 位小数。

输入格式
第一行输入一个正整数 n，表示有 n 个评委。

第二行输入 
n 个正整数，第 i 个正整数表示第 i 个评委打出的分值。

输出格式
输出一行一个两位小数，表示选手的最后得分。

输入输出样例
输入 #1
5
9 5 6 8 9
输出 #1
7.67

说明/提示
数据保证，3≤n≤1000，每个评委打出的分值为为 0 到 10（含 0 与 10）之间的整数。
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, score, max, min, sum = 0;
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i++)	{
		cin >> score;
		a.push_back(score);
	}
	max = min = a[0];
	for(int i = 0; i < n; i++) {
		if(max < a[i])
			max = a[i];
		else if(min > a[i])
			min = a[i];
		sum += a[i];
	}
	sum = sum - max - min;
	printf("%.2f", (double)sum / (n - 2));
	return 0;
}