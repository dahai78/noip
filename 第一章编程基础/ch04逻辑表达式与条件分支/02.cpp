/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {

  double  n;
  cin >> n;
  cout << setprecision(2) << fixed <<  fabs(n);
 // fabs()   计算绝对值
 return 0;
}

/************************************************************************************
输出绝对值

总时间限制: 1000ms 内存限制: 65536kB

描述
输入一个浮点数，输出这个浮点数的绝对值。

输入
输入一个浮点数，其绝对值不超过10000。

输出
输出这个浮点数的绝对值，保留到小数点后两位。

样例输入
-3.14

样例输出
3.14


************************************************************************************/
