#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {

  int total =0;
  int w;
  char ji;
  cin >> w >> ji;

  if( w<=1000)
    total += 8;
  else
    total += 8 + ( ceil ( (w-1000) /500.0 ) * 4 ) ;
    // 除以 500.0  是为了 防止 整数除以整数，会截去尾巴。

  if(ji=='y')
    total += 5;

  cout << total;

  return 0;
}
