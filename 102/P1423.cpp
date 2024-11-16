//P1423 小玉在游泳
/*
题目描述
小玉开心的在游泳，可是她很快难过的发现，自己的力气不够，游泳好累哦。已知小玉第一步能游 2 米，可是随着越来越累，力气越来越小，她接下来的每一步都只能游出上一步距离的 98%。
现在小玉想知道，如果要游到距离 s 米的地方，她需要游多少步呢。请你编程解决这个问题。

输入格式
输入一个实数 s（单位：米），表示要游的目标距离。

输出格式
输出一个整数，表示小玉一共需要游多少步。

输入输出样例
输入 #1
4.3
输出 #1
3

说明/提示
数据保证，0≤s<100，且 s 小数点后最多只有一位。
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	double s, s1 = 2, sTotal = 0, count = 0;
	cin >> s;
	while(sTotal < s) {
		sTotal += s1;
		s1 *= 0.98;
		count++;
	}
	cout << count << endl;
	return 0;
}