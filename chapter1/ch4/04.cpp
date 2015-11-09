#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  char ch;
  //cin >> ch; ÎÞ·¨¶Á¿Õ¸ñ
  cin.get(ch);
  string s= ( ch%2==0) ? "NO" : "YES" ;
  cout << s;
  return 0;
}
