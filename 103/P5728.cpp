//P5728 【深基5.例5】旗鼓相当的对手
/*
题目描述
现有 N 名同学参加了期末考试，并且获得了每名同学的信息：语文、数学、英语成绩（均为不超过 150 的自然数）。
如果某对学生 ⟨i,j⟩ 的每一科成绩的分差都不大于 5，且总分分差不大于 10，那么这对学生就是“旗鼓相当的对手”。
现在想知道这些同学中，有几对“旗鼓相当的对手”？同样一个人可能会和其他好几名同学结对。

输入格式
第一行一个正整数 N。
接下来 N 行，每行三个整数，其中第 i 行表示第 i 名同学的语文、数学、英语成绩。最先读入的同学编号为 1。

输出格式
输出一个整数，表示“旗鼓相当的对手”的对数。

输入输出样例
输入 #1
3
90 90 90
85 95 90
80 100 91
输出 #1
2

说明/提示
数据保证，2≤N≤1000 且每科成绩为不超过 150 的自然数。
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	vector<vector<double>> score(n, vector<double>(3, 0));
	vector<double> sum(n, 0);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < 3; j++) {
			cin >> score[i][j];
			sum[i] += score[i][j];
		}

	for(int i = 0; i < n; i++) 
		for(int j = i + 1; j < n; j++)
			if(fabs(sum[i] - sum[j]) <= 10)
				if(fabs(score[i][0] - score[j][0]) <= 5 && 
				   fabs(score[i][1] - score[j][1]) <= 5 && 
				   fabs(score[i][2] - score[j][2]) <= 5)
					count++;
	cout << count << endl;
	return 0;
}