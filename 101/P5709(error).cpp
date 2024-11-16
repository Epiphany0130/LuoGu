//P5709 【深基2.习6】Apples Prologue / 苹果和虫子
//该答案未通过所有测试点 -- 60分
/*
题目描述
小 B 喜欢吃苹果。她现在有m（1≤m≤100）个苹果，吃完一个苹果需要花费 t（0≤t≤100）分钟，吃完一个后立刻开始吃下一个。现在时间过去了 s（1≤s≤10000）分钟，请问她还有几个完整的苹果？

输入格式
输入三个非负整数表示 m,t,s。

输出格式
输出一个整数表示答案。

输入输出样例
输入 #1
50 10 200
输出 #1
30
说明/提示
如果你出现了 RE，不如检查一下被零除？
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if(s) {
        int time = m * t;
        if(t) {
            double apple = (time - s)/t;
            int apple_ = apple;
            apple -= apple_;
            if(apple) {
                apple_--;
                cout << apple_ << endl;
            } else {
                cout << apple_ << endl;
            }
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << m;
    }
    return 0;
}