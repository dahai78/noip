#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
 int chinese, math;
 cin >> chinese >> math;

 int ans;

 if(chinese>=60 && math <60 || chinese<60 && math>=60)
    ans = 1;
 else
    ans = 0;
 cout << ans;

  return 0;
}
