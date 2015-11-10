#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   double  a,b,c,d,x;
   cin >> x >> a >> b >> c >> d;
   cout << setprecision(7) << fixed << a*x*x*x +  b* x *x  + c*x + d;
}
