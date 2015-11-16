/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;

const  double pi = 3.14159;

int main(int argc, char** argv) {
   double a,b ;
   cin >> a >> b;
   cout <<  fmod(a,b) <<" ";  // 不能用 % 求余运算
}

/*
计算浮点数相除的余数
***************************************************************************************************
描述
计算两个双精度浮点数a和b的相除的余数，a和b都是正数的。这里余数（r）的定义是：a = k * b + r，其中 k是整数， 0 <= r < b。

输入
输入仅一行，包括两个双精度浮点数a和b。
输出
输出也仅一行，a÷b的余数
样例输入
73.263 0.9973
样例输出
0.4601

*/
