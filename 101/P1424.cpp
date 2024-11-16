//P1424 小鱼的航程（改进版）
/*
题目背景
题目描述
有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，假设从周 x 开始算起，过了 n 天以后，小鱼一共累计游泳了多少公里呢？

输入格式
输入两个正整数 x,n，表示从周 x 算起，经过 n 天。

输出格式
输出一个整数，表示小鱼累计游泳了多少公里。

输入输出样例
输入 #1
3 10
输出 #1
2000

说明/提示
数据保证，1≤x≤7，1≤n≤10^6
*/
 #include <bits/stdc++.h>
 using namespace std;
 int main() {
    int x, n, total = 0;
    cin >> x >> n;
     for(int i = 0; i < n; i++) {
         if(x != 6 && x != 7)
            total += 250;
         if(x == 7)
            x = 1;
         else
            x++;
     }
     cout << total << endl;
    return 0;
 }