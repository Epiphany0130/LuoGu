//P1001 A+B Problem
/*
题目描述
输入两个整数 a,b，输出它们的和（∣a∣,∣b∣≤ 10^9）。

注意

1. Pascal 使用 integer 会爆掉哦！
2. 有负数哦！
3. C/C++ 的 main 函数必须是 int 类型，而且 C 最后要 return 0。这不仅对洛谷其他题目有效，而且也是 NOIP/CSP/NOI 比赛的要求！
好吧，同志们，我们就从这一题开始，向着大牛的路进发。
任何一个伟大的思想，都有一个微不足道的开始。

输入格式
两个以空格分开的整数。

输出格式
一个整数。

输入输出样例
输入 #1
20 30
输出 #1
50
 */
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b;
}