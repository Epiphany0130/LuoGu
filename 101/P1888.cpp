//P1888 三角函数
/*
题目描述
输入一组勾股数 a,b,c（a=b=c），用分数格式输出其较小锐角的正弦值。（要求约分。）

输入格式
一行，包含三个正整数，即勾股数 a,b,c（无大小顺序）。

输出格式
一行，包含一个分数，即较小锐角的正弦值

输入输出样例
输入 #1
3 5 4
输出 #1
3/5

说明/提示
数据保证：a,b,c 为正整数且 ∈[1,10^9]。
*/
#include <bits/stdc++.h>
using namespace std;
void min(long long* a, long long* b, long long* c) {
    int temp;
    if(*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a < *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b < *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
long long gcd(long long a, long long b) {
    int temp;
    while(a % b){
        temp = a % b;
        a = b;
        b = temp;
    }
    return b;
}
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    min(&a, &b, &c);
    cout << c / gcd(c, a) << '/' << a / gcd(a, c);
    return 0;
}