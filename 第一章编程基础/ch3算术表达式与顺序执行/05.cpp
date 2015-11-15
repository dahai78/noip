/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   int  a,b;
   cin >> a >> b ;
   cout << setprecision(9) << fixed <<(double) a /b;
}
/*
描述
两个整数a和b分别作为分子和分母，既分数 a/b ，求它的浮点数值（双精度浮点数，保留小数点后9位）

输入
输入仅一行，包括两个整数a和b
输出
输出也仅一行，分数 a/b 的浮点数值（双精度浮点数，保留小数点后9位）
样例输入
5 7
样例输出
0.714285714


*/