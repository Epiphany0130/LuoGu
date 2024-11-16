//P5721 【深基4.例6】数字直角三角形
/*
题目描述
给出 n，请输出一个直角边长度是 n 的数字直角三角形。所有数字都是 2 位组成的，如果没有 2 位则加上前导 0。

输入格式
输入一个正整数 n。

输出格式
输出如题目要求的数字直角三角形。

输入输出样例
输入 #1
5
输出 #1
0102030405
06070809
101112
1314
15

说明/提示
数据保证，1≤n≤13。
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= n - i - 1; j++)
            printf("%02d", num++);
        cout << endl;
    }
    return 0;
}