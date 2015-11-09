#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int n;
  cin >> n;

  string s;
  s= ( n%2==0) ? "even" :"odd";
  cout << s;

}
