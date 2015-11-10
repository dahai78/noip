#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   int  a,b;
   cin >> a >> b ;
   cout << setprecision(3) << fixed <<  double(b)/a * 100 <<"%" ;
   // 可能有其他方法。 我用这个。
}
