#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int m ,n;
  cin>> m >> n;
  int ans = ( m>=10 || n>=20) ? 1 : 0;
  cout << ans;

  return 0;
}
