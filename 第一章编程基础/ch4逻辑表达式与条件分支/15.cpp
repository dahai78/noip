#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int a,b,c;
  cin >> a >> b >> c;

  //直接用max 函数，不要麻烦的打擂台了。
  int m = max(a ,b);
  m = max( m , c);


  cout << m;

  return 0;
}
