#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {
  int x,y;
  cin >> x >>y;
  if( x>=-1 && x<=1 && y>=-1 && y<=1 )
     cout << "yes";
  else
    cout << "no";

  return 0;
}
