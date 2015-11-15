#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  char ch;
  //cin >> ch; 无法读空格
  cin.get(ch);
  //cout  << ( ( ch%2==0) ? "NO" : "YES" );
  cout <<  ( (ch%2==0) ? "NO" : "YES"  );   // 三目运算符？：为了防止优先级出问题，加上括号！

  return 0;
}
