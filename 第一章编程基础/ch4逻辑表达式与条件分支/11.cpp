#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  if( n!=1 && n!=3 && n!=5)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
