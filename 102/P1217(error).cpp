//P1217 [USACO1.5] 回文质数 Prime Palindromes
//该题答案未通过所有测试点 -- 88分
/*
题目描述
因为 151 既是一个质数又是一个回文数（从左到右和从右到左是看一样的），所以 151 是回文质数。
写一个程序来找出范围 [a,b](5≤a<b≤100,000,000)（一亿）间的所有回文质数。

输入格式
第一行输入两个正整数 a 和 b。

输出格式
输出一个回文质数的列表，一行一个。

输入输出样例
输入 #1
5 500
输出 #1
5
7
11
101
131
151
181
191
313
353
373
383

说明/提示
Hint 1: Generate the palindromes and see if they are prime.
提示 1: 找出所有的回文数再判断它们是不是质数（素数）.
Hint 2: Generate palindromes by combining digits properly. You might need more than one of the loops like below.
提示 2: 要产生正确的回文数，你可能需要几个像下面这样的循环。
题目翻译来自NOCOW。
USACO Training Section 1.5
产生长度为 5 的回文数：

for (d1 = 1; d1 <= 9; d1+=2) {    // 只有奇数才会是素数
     for (d2 = 0; d2 <= 9; d2++) {
         for (d3 = 0; d3 <= 9; d3++) {
           palindrome = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;//(处理回文数...)
         }
     }
 }
 */
#include <bits/stdc++.h>
using namespace std;
long long fun(long long num) {
	long long a, b = 0, c = num;
	while(num != 0) {
		a = num % 10;
		b = b * 10 + a;
		num /= 10;
	}
	if(b == c)
		return 1;
	return 0;
}
long long fac(long long n) {
	long long m;
	m = sqrt(n);
	for(int i = 2; i <= m; i++)
		if(n % i == 0) 
			return 0;
	return 1;
}
int main() {
	long long num1, num2;
	cin >> num1 >> num2; 
	for(int i = num1; i <= num2; i++) {
		if(fun(i)) 
			if(fac(i))
				cout << i << endl;
	}
	return 0;
}