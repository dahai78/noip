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
