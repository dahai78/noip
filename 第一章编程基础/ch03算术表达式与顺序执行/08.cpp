/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   double  f;
   cin >> f;
   cout << setprecision(5) << fixed <<  5*(f -32) /9;
}


/*

温度表达转化

描述
利用公式 C = 5 * (F-32) / 9 （其中C表示摄氏温度，F表示华氏温度） 进行计算转化。

输入
输入一行，包含一个实数f，表示华氏温度。（f >= -459.67）

输出
输出一行，包含一个实数，表示对用的摄氏温度，要求精确到小数点后5位。

样例输入
41

样例输出
5.00000

*/
