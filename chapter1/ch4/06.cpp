#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  int ans = ( n>=10 && n<=99) ? 1 :0;
  cout << ans;

  return 0;
}
