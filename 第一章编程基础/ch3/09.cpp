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
