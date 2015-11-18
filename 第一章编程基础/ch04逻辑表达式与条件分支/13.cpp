/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  double  x;
  cin >> x;
  double  y;

  if(x >=0 && x<5)
    y = -x + 2.5;
  else if( x<10)
            y = 2-1.5*(x-3)*(x-3);
        else if( x<20)
                y = x/2 -1.5;

 cout << setprecision(3) << fixed << y;

  return 0;
}

/************************************************************************************
分段函数             http://noi.openjudge.cn/ch0104/13/

描述
编写程序，计算下列分段函数y=f(x)的值。

y=-x+2.5; 0 <= x < 5

y=2-1.5(x-3)(x-3); 5 <= x < 10

y=x/2-1.5; 10 <= x < 20

输入
一个浮点数N,0 <= N < 20
输出

输出N对应的分段函数值：f(N)。结果保留到小数点后三位。

样例输入
1.0

样例输出
1.500


************************************************************************************/
