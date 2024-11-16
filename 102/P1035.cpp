//P1035 [NOIP2002 普及组] 级数求和
/*
题目描述
已知：S=½ + ⅓ + ¼ + ... + 1/n 。显然对于任意一个整数 k，当 n 足够大的时候，Sn > k。

输入格式
一个正整数 k。

输出格式
一个正整数 n。

输入输出样例
输入 #1
1
输出 #1
2

说明/提示
【数据范围】
对于 100% 的数据，1≤k≤15。

【题目来源】
NOIP 2002 普及组第一题
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n = 1;
    int k;
    double sn = 0;
    cin >> k;
    while(sn <= k) {
        sn += 1./n;
        n++;
    }
    cout << n - 1 << endl;
    return 0;
}