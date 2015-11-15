#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {
  int x,y;
  char op;

  cin >> x >> y >>op;
  
  // 练习用switch语句
  switch(op){   
  case '+':
       cout << x+y;
       break;
  case '-':
       cout << x-y;
      break;
  case '*':
      cout << x*y;
      break;
  case '/':
      if( y==0)
        cout << "Divided by zero!";
      else
        cout << x/y;

      break;
  default:
        cout << "Invalid operator!";

  }
  return 0;
}
