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

//这道题用到了高精度加法和高精度乘法的算法，所以做这道题之前先学习一下高精度算法
//虽然这里只用到了加法和乘法，但在后面高精度的题单中也会用到减法，所以一次学完吧
//除法的情况比较多，有些复杂，在后面高精度的题单中再学

//学习高精度加法
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    //定义两个字符串，分别存放加数和被加数
    string s1, s2;
    //定义三个整数数组
    //s1 逆序存储在 a1 中，字符改数字，同理，s2 逆序存储在 a2 中，字符改数字
    //a3 存储每一位相加后的值
    int a1[210] = {}, a2[210] = {}, a3[210] = {0};
    //使用 getline 函数输入字符串
    getline(cin, s1);
    getline(cin, s2);
    //字符改数组，逆序存储
    for(int i = 0; i < s1.size(); i++) {
        a1[s1.size()-i-1] = s1[i] - '0';
    }
    for(int i = 0; i < s2.size(); i++) {
        a2[s2.size()-i-1] = s2[i] - '0';
    }
    //定义一个长度，确定循环次数
    int len = s1.size();
    //两个数相加，最多的相加次数是位数多的那一位
    //s2.size() > s1.size() 成立说明 s2 的位数大于 s1 的位数
    //否则 s1 的位数大于 s2 的位数
    if(s2.size() > s1.size()) {
        len = s2.size();
    }
    //把 a1[i] + a2[i] 的值存储在 a3[i] 中
    for(int i = 0; i < len; i++) {
        a3[i] = a1[i] + a2[i];
    }
    //两个数相加可能得到的结果是大于十的，所以就要进位
    for(int i = 0; i < len; i++) {
        //判断如果这个数大于10
        if(a3[i] > 10) {
            //后一位的值等于后一位的值加上进位的值
            a3[i+1] = a3[i+1] + a3[i] / 10;
            //本位的数字进位数已经加到了后一位，所以本位只需要留下个位数的部分
            a3[i] = a3[i] % 10;
        }
    }
    //原数组已经初始化为 0， 而 a3[len] 的值是最后一个相加数的后一位（数组越界），所以只需要判断这一位的数字是否为 0
    //如果是 0 说明运算结束以后最后一位没有进位数字
    //比如 len 的值是 20，那数组 a3 最后一次相加的数是 a3[19]，如果相加后 a3[20] 的数是 0，说明 a1[19] + a2[19] < 10，没有进位
    //那如果 a1[19] + a2[19] >= 10，则需要进位，那 a3[i+1] 也就是 a3[19+1] 就是 a3[20] 的值就不等于 0，因为要进位，那总的数字的位数就要加一，即循环次数要加一
    if(a3[len] != 0) {
        len++;
    }
    //逆序输出 a3 数组的值即相加后的值
    for(int i = len - 1; i >= 0; i--) {
        cout << a3[i];
    }
    return 0;
}
*/


//学习高精度减法
 #include <bits/stdc++.h>
 using namespace std;
 int main() {
    //定义两个字符串，分别存放减数和被减数
    string s1, s2;
    //使用 getline 函数对字符串进行输入
    getline(cin, s1);
    getline(cin, s2);
    //定义三个整型数组
    //s1 倒叙存入 a1，并变数字，s2 倒叙存入 a2，并变数组
    //a3 存储各个位相减后的值，倒叙
    int a1[210] = {}, a2[210] = {}, a3[210] = {};
    //一个字符变量存储符号
    char flag = '+';
    //我们需要让数字大的数放在上面（模拟列竖式），如果 s1 长度本身就大于 s2，那就不用变，结果为正数
    //如果 s1 的长度小于 s2 的长度，说明结果为负数，那就让更长的 s2 放在上面，也就是交换 s1 和 s2 的值（保持 s1 永远是更大的数）
    //如果 s1 的长度和 s2 的长度相同，这时没办法通过长度判断出哪个数更大，就要比较字符串
    //字符串是可以直接比较的，如果 s1 < s2 那就说明 s1 的数小于 s2 的数，那就需要交换
    //字符串是可以直接比较的，其原理是通过字典码的比较
    //比如：123 和 122  首先比较 1，两个都是 1 说明字典码相同，那就比较第二个数 2，两个都是 2 说明字典码相同，那就比较第三个数，
    //3 和 2 字典码不同，3 的字典码大于 2 的字典码，所以 123 大于 122
    //同理，这里的 s1 和 s2 也是这样比较
    if(s1.size() < s2.size() || s1.size() == s2.size() && s1 < s2) {
        //如果 s1 的值是小的，那就使用 swap 函数交换两个字符串的值，保证 s1 的值是更大的
        swap(s1, s2);
        //因为 s1 小于 s2，所以相减后的值是负数，那这里 flag 的值就改成负号
        flag = '-';
    }
    //将 s1 的值逆序存储在 a1 中
    for(int i = 0; i < s1.size(); i++) {
        a1[i] = s1[s1.size()-i-1] - '0';
    }
    //将 s2 的值逆序存储在 a2 中
    for(int i = 0; i < s2.size(); i++) {
        a2[i] = s2[s2.size()-i-1] - '0';
    }
    //进行相减运算
    for(int i = 0; i < s1.size(); i++) {
        //如果运算位 a1 的值小于 a2 的值，说明减不到，就要借位
        if(a1[i] < a2[i]) {
            //向前一位借位 1，本位就是加 10
            a1[i] = a1[i] + 10;
            //前一位被借了1，那就要减去 1
            a1[i+1] = a1[i+1] - 1;
        }
        //把 a1 - a2 的值存储在 a3 中
        a3[i] = a1[i] - a2[i];
    }
    //如果符号是负号，说明是负数，要输出负号
    if(flag == '-') {
        cout << flag;
    }
    //逆序输出结果，也就是 a3 的值
    //但这里有个问题，a3 的大小定义的是 210，但结果大概率不会是 210 位，所以要找到最后一位数的下标位置，从这一位置逆序输出
    //定义一个 index 存储这个位置
    int index = 0;
    //开始找这个位置，从 s1.size() 开始往前找
    //因为 s1 里面存的是大的数，进行减法运算后这个数绝对不会大于 s1.size。举个例子：625 减去任何一个数，它的值都不可能大于三位
    for(int i = s1.size(); i >= 0; i--) {
        //如果数为 0，说明这不是最终结果的第一位，因为逆序输出，一个数的第一位不可能是 0
        //当找到第一个不是 0 的数，说明找到了
        if(a3[i] != 0) {
            //找到这个位置后，把其下标给到 index，然后就可以退出循环了
            index = i;
            break;
        }
    }
    //从 index 的位置开始逆序输出结果
    for(int i = index; i >= 0; i--) {
        cout << a3[i];
    }
    return 0;
 }


//学习高精度乘法
//高精度乘法有两种情况：1. 高精度数 * 单精度数  2. 高精度数 * 高精度数

//先看高精度数 * 单精度数
//还是模拟竖式 13 * 14  得到结果 182
//这个竖式可以改变一下写法，之前模拟竖式我们是乘数的每一位乘被乘数的每一位，然后错位相加
//但我们可以改变一下，让第一个数的每一位都乘第二个数，比如 13 * 14，就是 3 * 14 和 1 * 14，如果我们把13看成高精度数，把14看成单精度数，那就是让高精度的每一位乘单精度数
//3 * 14 得到 42，1 * 14 得到 14，所以得到 14 42，再逐个向前进位，42 留下 2 向前进 4，前面的 14 变成了 18，18 留下 8 再向前进 1，这样得到的结果还是 182
//所以高精度数 * 单精度数的算法可以是：高精度数的每一位都和单精度数相乘，最后在逐位进位即可
//竖式从右往左计算，所以把高精度数倒叙放入数组 a 中，然后用一个整型变量存储单精度数，计算结果可以直接放在数组 a 中，然后逐个从左往右进位，最后逆序输出即可
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    //首先需要一个字符串存储高精度数
    string s = "";
    //将 s 的值逆序存储在 a 中，并变数字
    int a[250] = {0};
    //一个整型变量存储单精度数
    int b = 0;
    //输入高精度数和单精度数
    cin >> s >> b;
    //将高精度数逆序存储在整型数组中，并变数字
    for(int i = 0; i < s.size(); i++) {
        a[i] = s[s.size() - 1 - i] - '0';
    }
    //用高精度的每一位乘单精度数，计算结果直接存储在整型数组中
    for(int i = 0; i < s.size(); i++) {
        a[i] = a[i] * b;
    }
    //逐位进位，这里我们假设单精度数是不超过 10000 的数，那最大就是 9999，也就是四位数字
    //通过计算，可以得到，计算结果最大不会超过多精度数的位数加 4
    //所以这里的循环条件就是小于 多精度数位数 + 4
    for(int i = 0; i < s.size() + 4; i++) {
        //如果小于 10，那就不用进位，如果大于 10，说明需要进位
        if(a[i] >= 10) {
            //后一位的值等于它本身加该位十位上的数字
            a[i+1] = a[i+1] + a[i] / 10;
            //该位等于该位本身个位的数字
            a[i] = a[i] % 10;
        }
    }
    //和减法一样，我们要找到最后一个数字的下标，然后逆序输出
    int index = 0;
    for(int i = s.size()+4-1; i >= 0; i--) {
        if(a[i] != 0) {
            index = i;
            break;
        }
    }
    for(int i = index; i >= 0; i--) {
        cout << a[i];
    }
}
*/
//接着看高精度数 * 高精度数
//还是模拟竖式计算，235 * 145 得到 34075
//这里假设 235 和 145 都是高精度数，我们把他们分别逆序存储在整型数组中，并变数字
//逆序后就是 532 和 541
//用第一个高精度数的每一位乘第二个高精度数的第一位，也就是5 3 2 分别乘 5，将结果保存在另一个整型数组中
//然后再将第一个高精度数的每一位乘第二个高精度数的第二位，也就是5 3 2 分别乘 4，这里得到的结果要错位和刚才上一步数组中存储的数字相加，并向右进位，然后再保存在数组中
//以此类推，要注意每次乘完的数都要错位，以及相加后要向右进位，最后逆序输出结果即可
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    //两个字符串数组存储两个高精度数
    string s1 = "", s2 = "";
    //a 和 b 分别逆序存储 s1 和 s2，并变数字，c 存储相乘结果
    //这里我们假设每一个高精度数的长度不超过 240 位，所以前两个数组定义 250 位足够使用了
    //两个不超过 240 位的数字相乘的结果肯定不超过 480 位，所以第三个数组定义 500 位足够使用了
    int a[250] = {}, b[250] = {}, c[500] = {};
    //输入两个高精度数
    cin >> s1 >> s2;
    //将 s1 逆序存储在 a，并变数字
    for(int i = 0; i < s1.size(); i++) {
        a[i] = s1[s1.size()-1-i] - '0';
    }
    //将 s2 逆序存储在 b，并变数字
    for(int i = 0; i < s2.size(); i++) {
        b[i] = s2[s2.size()-1-i] - '0';
    }
    //双重循环让第一个数组中的每一位乘第二个数组中的每一位
    //这里数组 a 和数组 b 哪个在前面都可以，因为乘法最后两个数的每一位都要相互做乘法，所以哪个在前面不会影响最后结果
    for(int i = 0; i < s2.size(); i++) {
        for(int j = 0; j < s1.size(); j++) {
            //首先 a[j] * b[i] 就是让两个数相乘，然后要进行错位相加，所以这个结果要让 c[j+1] 的值去加，然后把结果存储在 c 数组中
            c[j+i] = c[j+i] + a[j] * b[i];
            //进位
            if(c[j+i] >= 10) {
                c[j+i+1] += c[j+i] / 10;
                c[j+i] = c[j+i] % 10;
            }
        }
    }
    //找到下标，逆序输出
    int index = 0;
    int len = s1.size() + s2.size();
    for(int i = len - 1; i >= 0; i--) {
        if(c[i] != 0) {
            index = i;
            break;
        }
    }
    for(int i = index; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}
*/
/*
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
}*/