//P5705 【深基2.例7】数字反转
/*
题目描述
输入一个不小于 100 且小于 1000，同时包括小数点后一位的一个浮点数，例如 123.4 ，要求把这个数字翻转过来，变成 4.321 并输出。

输入格式
一行一个浮点数

输出格式
一行一个浮点数

输入输出样例
输入 #1
123.4
输出 #1
4.321
*/
#include <iostream>
using namespace std;
int main() {
  double num, num1 = 0;
  int temp;
  cin >> num;
  num *= 1000;
  temp = num;
  for(; temp; temp /= 10)
    num1 = num1 * 10 + temp % 10;
  num1 /= 1000;
  cout << num1 << endl;
  return 0;
}