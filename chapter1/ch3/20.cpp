/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;

const  double pi = 3.14159;

int main(int argc, char** argv) {
  int  n;
  cin >> n;
  //cout <<  setprecision(0) << fixed << pow(2, n);
  //如果cout << pow(2, n);  只能通过6组数据

  cout << (int) pow(2, n); //转化成整数， 会截掉小数点尾巴


}
