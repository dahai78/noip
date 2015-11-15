/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

const  double pi = 3.14159; //注意怎样定义一个常量

int main(int argc, char** argv) {
   double  r;
   cin >> r;
   cout << setprecision(4) << fixed << 2*r <<" ";
   cout << setprecision(4) << fixed << 2 *pi * r <<" ";
   cout << setprecision(4) << fixed << pi * r *r  <<" ";

}


/*
与圆相关的计算

描述
给出圆的半径，求圆的直径、周长和面积。

输入
输入包含一个实数r（0 < r <= 10,000），表示圆的半径。
输出
输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。
样例输入
3.0
样例输出
6.0000 18.8495 28.2743

*/
