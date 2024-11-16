//P1421 小玉买文具
/*
题目描述
班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 1 元 9 角，而班主任给小玉的钱是 a 元 b 角，小玉想知道，她最多能买多少只签字笔呢。

输入格式
输入只有一行两个整数，分别表示 a 和 b。

输出格式
输出一行一个整数，表示小玉最多能买多少只签字笔。

输入输出样例
输入 #1
10 3
输出 #1
5

说明/提示
数据规模与约定对于全部的测试点，保证 0≤a≤10^4, 0≤b≤9。
*/
#include <iostream>
using namespace std;
int main() {
  int a, b;
  double money;
  cin >> a >> b;
  money = a + b / 10.;
  int count;
  count = money / 1.9;
  cout << count << endl;
  return 0;
}