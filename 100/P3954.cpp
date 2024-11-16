//P3954 [NOIP2017 普及组] 成绩
/*
题目背景
NOIP2017 普及组 T1

题目描述
牛牛最近学习了 C++ 入门课程，这门课程的总成绩计算方法是：
总成绩=作业成绩×20%+小测成绩×30%+期末考试成绩×50%
牛牛想知道，这门课程自己最终能得到多少分。

输入格式
三个非负整数A,B,C，分别表示牛牛的作业成绩、小测成绩和期末考试成绩。相邻两个数之间用一个空格隔开，三项成绩满分都是 100 分。

输出格式
一个整数，即牛牛这门课程的总成绩，满分也是 100 分。

输入输出样例
输入 #1
100 100 80 
输出 #1
90

输入 #2
60 90 80 
输出 #2
79

说明/提示
样例 1 说明
牛牛的作业成绩是 100 分，小测成绩是 100 分，期末考试成绩是 80 分，总成绩是 100×20%+100×30%+80×50%=20+30+40=90。

样例 2 说明
牛牛的作业成绩是 60 分，小测成绩是 90 分，期末考试成绩是 80 分，总成绩是 60×20%+90×30%+80×50%=12+27+40=79。

数据说明
对于 30% 的数据，A=B=0。
对于另外 30% 的数据，A=B=100。
对于 100% 的数据，0≤A,B,C≤100 且 A,B,C 都是 10 的整数倍。
*/
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int score;
  score = a * .2 + b * .3 + c * .5;
  cout << score << endl;
}