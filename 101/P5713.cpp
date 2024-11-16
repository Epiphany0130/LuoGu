//P5713 【深基3.例5】洛谷团队系统
/*
题目描述
在洛谷上使用团队系统非常方便的添加自己的题目。
如果在自己的电脑上配置题目和测试数据，每题需要花费时间 5 分钟；而在洛谷团队中上传私有题目，每题只需要花费 3 分钟，但是上传题目之前还需要一次性花费 11 分钟创建与配置团队。
现在要配置 n 道题目，如果本地配置花费的总时间短，请输出 Local，否则输出 Luogu。

输入格式
输入一个正整数 n，表示需要配置的题目量。

输出格式
输出一行，一个字符串。如果本地配置花费的总时间短，请输出 Local，否则输出 Luogu。

输入输出样例
输入 #1
2
输出 #1
Local

输入 #2
50
输出 #2
Luogu

说明/提示
数据保证 1≤n≤100。
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, time_local, time_luogu;
    cin >> num;
    time_local = num * 5;
    time_luogu = num * 3 + 11;
    if(time_local < time_luogu)
        cout << "Local" << endl;
    else
        cout << "Luogu" << endl;
    return 0;
}