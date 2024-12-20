//P5718 【深基4.例2】找最小值
/*
题目描述
给出 n 和 n 个整数 ai ，求这 n 个整数中最小值是什么。

输入格式
第一行输入一个正整数 n，表示数字个数。

第二行输入 n 个非负整数，表示 a1,a2...an ，以空格隔开。

输出格式
输出一个非负整数，表示这 n 个非负整数中的最小值。

输入输出样例
输入 #1
8
1 9 2 6 0 8 1 7
输出 #1
0

说明/提示
数据保证，n≤100 且 0≤ai​≤1000。
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num[100], n, min;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> num[i];
    min = num[0];
    for(int i = 1; i < n; i++)
        if(num[i] < min)
            min = num[i];
    cout << min << endl;
    return 0;
}