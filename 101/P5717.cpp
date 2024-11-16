//P5717 【深基3.习8】三角形分类
/*
题目描述
给出三条线段 a,b,c 的长度，均是不大于 10000 的正整数。打算把这三条线段拼成一个三角形，它可以是什么三角形呢？

如果三条线段不能组成一个三角形，输出Not triangle；
如果是直角三角形，输出Right triangle；
如果是锐角三角形，输出Acute triangle；
如果是钝角三角形，输出Obtuse triangle；
如果是等腰三角形，输出Isosceles triangle；
如果是等边三角形，输出Equilateral triangle。
如果这个三角形符合以上多个条件，请按以上顺序分别输出，并用换行符隔开。

输入格式
输入 3 个整数 a、b 和 c。

输出格式
输出若干行判定字符串。

输入输出样例
输入 #1
3 3 3
输出 #1
Acute triangle
Isosceles triangle
Equilateral triangle

输入 #2
3 4 5
输出 #2
Right triangle

输入 #3
6 10 6
输出 #3
Obtuse triangle
Isosceles triangle

输入 #4
1 14 5
输出 #4
Not triangle

说明/提示
当两短边的平方和大于一长边的平方，说明是锐角三角形。
当两短边的平方和等于一长边的平方，说明是直角三角形。
当两短边的平方和小于一长边的平方，说明是钝角三角形。
*/
#include<iostream>
using namespace std;
int main() {
    int a, b, c, t;
    cin >> a >> b >> c;
    if(b > c) {
        t = b;
        b = c;
        c = t;
    }
    if(a > b) {
        t = a;
        a = b;
        b = t;
    }
    if(b > c) {
        t = b;
        b = c;
        c = t;
    }
    if(a + b > c && a + c > b && b + c > a) {
        if(a * a + b * b == c * c) 
            cout << "Right triangle\n"; 
        else if(a * a + b * b > c * c) 
            cout << "Acute triangle\n"; 
        else if(a * a + b * b < c * c) 
            cout << "Obtuse triangle\n";
        if(a == b || a == c || b == c)
            cout << "Isosceles triangle\n";
        if(a == b && a == c && b == c)
            cout << "Equilateral triangle\n";
        
    } else {
        cout << "Not triangle";
    }
    return 0;
}