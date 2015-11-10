#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int a,b,c;
  cin >> a >> b >> c;

  cout << (  ( a+b>c && a+c>b && b+c>a)  ? "yes" : "no"   );



  return 0;
}
