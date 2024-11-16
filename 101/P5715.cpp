//P5715 【深基3.例8】三位数排序
/*
题目描述
给出三个整数a,b,c(0≤a,b,c≤100)，要求把这三位整数从小到大排序。

输入格式
输入三个整数 a,b,c，以空格隔开。

输出格式
输出一行，三个整数，表示从小到大排序后的结果。

输入输出样例
输入 #1
1 14 5
输出 #1
1 5 14

输入 #2
2 2 2
输出 #2
2 2 2
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, temp;
    cin >> a >> b >> c;
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c) {
        temp = b;
        b = c;
        c =  temp;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}