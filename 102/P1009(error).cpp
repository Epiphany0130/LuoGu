//P1009 [NOIP1998 普及组] 阶乘之和
//改题答案未通过所有测试点 -- 50分
/*
题目描述
用高精度计算出 S=1!+2!+3!+⋯+n!（n≤50）。
其中 ! 表示阶乘，定义为 n!=n×(n−1)×(n−2)×⋯×1。例如，5!=5×4×3×2×1=120。

输入格式
一个正整数 n。

输出格式
一个正整数 S，表示计算结果。

输入输出样例
输入 #1
3
输出 #1
9

说明/提示
【数据范围】
对于 100% 的数据，1≤n≤50。

【其他说明】
注，《深入浅出基础篇》中使用本题作为例题，但是其数据范围只有 n≤20，使用书中的代码无法通过本题。
如果希望通过本题，请继续学习第八章高精度的知识。
NOIP1998 普及组 第二题
 */
#include <bits/stdc++.h>
using namespace std;
unsigned long long fac(int n) {
	unsigned long long sum = 1;
    if(n == 1 || n == 0)
        return 1;
    else
        for(int i = 1; i <= n; i++)
			sum *= i;
	return sum;
}
int main() {
    int n;
    unsigned long long S = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        S += fac(i);
    cout << S << endl;
    return 0;
}