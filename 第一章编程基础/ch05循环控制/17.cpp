#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {


  double h; //记录当前高度
  cin >>h;

  double dis=0; //记录第n次时候弹跳到最高处时候 运动的距离。

  for(int i=1;i<=10;i++)
  {
      dis +=  h*3/2;
      h = h /2;
  }

  cout << dis - h << endl;   //求第10次落地的时候的距离，要减去。。。
  cout << h;


  }
