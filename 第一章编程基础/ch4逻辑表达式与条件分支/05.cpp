#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  long x , y;
  //  用int ，不能全部通过所有测试数据
  cin >> x >> y ;


  if(x>y) cout << ">";
  else if (x == y)
            cout << "=";
        else
            cout << "<";

  return 0;
}
