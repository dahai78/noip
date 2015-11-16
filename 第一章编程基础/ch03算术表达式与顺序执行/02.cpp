/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   int  a,b,c;
   cin >> a >> b >> c;
   cout << (a+b)*c;
}


/*
总时间限制: 1000ms 内存限制: 65536kB
描述
给定3个整数a、b、c，计算表达式(a+b)*c的值。

输入
输入仅一行，包括三个整数a、b、c, 数与数之间以一个空格分开。
(－10,000 < a,b,c < 10,000)
输出
输出一行，即表达式的值
样例输入
2 3 5
样例输出
25

*/