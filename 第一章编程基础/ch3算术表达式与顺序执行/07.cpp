/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   double  a,b,c,d,x;
   cin >> x >> a >> b >> c >> d;
   cout << setprecision(7) << fixed << a*x*x*x +  b* x *x  + c*x + d;
}
