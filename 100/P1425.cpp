//P1425 小鱼的游泳时间
/*
题目描述
伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。

这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按 24 小时制计算），它发现自己从 a 时 b 分一直游泳到当天的 c 时 d 分，请你帮小鱼计算一下，它这天一共游了多少时间呢？

小鱼游的好辛苦呀，你可不要算错了哦。

输入格式
一行内输入四个整数，以空格隔开，分别表示题目中的 a,b,c,d。

输出格式
一行内输出两个整数 e 和 f，用空格间隔，依次表示小鱼这天一共游了多少小时多少分钟。其中表示分钟的整数 f 应该小于 60。

输入输出样例
输入 #1
12 50 19 10
输出 #1
6 20
说明/提示
对于全部测试数据，0≤a,c≤24，0≤b, d≤60，且结束时间一定晚于开始时间。
*/
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int h, m;
    if(b > d) {
        m = 60 - b + d;
        h = c - a - 1;
    } else {
        m = d - b;
        h = c - a;
    }
    cout << h << ' ' << m;

    return 0;
}