//B2005 字符三角形
/*
题目描述
给定一个字符，用它构造一个底边长 5 个字符，高 3 个字符的等腰字符三角形。

输入格式
输入只有一行，包含一个字符。

输出格式
该字符构成的等腰三角形，底边长 5 个字符，高 3 个字符。

输入输出样例
输入 #1
*
输出 #1
  *
 ***
*****
 */
#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    cout << "  " << ch << endl;
    cout << " " << ch << ch << ch << endl;
    cout << ch << ch << ch << ch << ch << endl;
    return 0;
}