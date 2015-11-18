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
    //   运算符/:  如果分子分母都是整数，则结果取整 例如： 9/2 结果为4
    //   double( a )的作用是： 强制把整数a 转化为 浮点数。  也可以用  a *1.0 / b  达到同样的效果 
	  
}
/*
计算分数的浮点数值

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