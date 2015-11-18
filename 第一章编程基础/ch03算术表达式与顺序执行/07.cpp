/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   double  a,b,c,d,x;
   cin >> x >> a >> b >> c >> d;
   cout << setprecision(7) << fixed << a * x * x * x +  b * x * x  + c * x + d;
}

/*

计算多项式的值

描述
对于多项式f(x) = ax3 + bx2 + cx + d 和给定的a, b, c, d, x，计算f(x)的值。

输入
输入仅一行，包含5个实数，分别是x，及参数a、b、c、d的值，每个数都是绝对值不超过100的双精度浮点数。数与数之间以一个空格分开。

输出
输出一个实数，即f(x)的值，保留到小数点后7位。

样例输入
2.31 1.2 2 2 3

样例输出
33.0838692

*/