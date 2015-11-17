#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;

int calc(int a, char  op, int b)
{
  int  ans;
  switch(op){
  case '+': ans= a+b; break;
  case '-': ans = a-b;break;
  case '*': ans = a* b;break;
  case '/': ans = a/b;break;
  case '%': ans =a %b;break;
  }
  return ans;
}

int main(int argc, char** argv) {

  int x,y;
  char c;
  cin >> x >> c >> y;
  cout << calc(x,c,y);


  return 0;
}


