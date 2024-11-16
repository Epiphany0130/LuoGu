//P5719 【深基4.例3】分类平均
/*
题目描述
给定 n 和 k，将从 1 到 n 之间的所有正整数可以分为两类：
A 类数可以被 k 整除（也就是说是 k 的倍数），而 B 类数不能。
请输出这两类数的平均数，精确到小数点后 1 位，用空格隔开。

数据保证两类数的个数都不会是 0。

输入格式
输入两个正整数 n 与 k。

输出格式
输出一行，两个实数，分别表示 A 类数与 B 类数的平均数。精确到小数点后一位。

输入输出样例
输入 #1
100 16
输出 #1
56.0 50.1

说明/提示
数据保证，1≤n≤10000，1≤k≤100。
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, count1 = 0, count2 = 0;
    double avg1 = 0, avg2 = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        if(i % k == 0) {
            avg1 += i;
            count1++;
        }
        else {
            avg2 += i;
            count2++;
        }
    printf("%.1f %.1f\n", avg1/count1, avg2/count2);
    return 0;
}