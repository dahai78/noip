#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
 int n;
 cin >> n;
 string ans = ( n%3==0 && n%5==0) ? "YES" : "NO";
 cout << ans;

  return 0;
}
