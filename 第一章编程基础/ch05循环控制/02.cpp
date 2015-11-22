/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int n;
  cin >>n;

  double total=0;
  for(int i=0; i<n; i++)
  {
      double  years;
      cin >> years;
      total += years;

  }

  cout << setprecision(4) << fixed << total  / n;

}


/*********************************************************************************
均值

描述
给出一组样本数据，计算其均值。

输入
输入有两行，第一行包含一个整数n（n小于100），代表样本容量；第二行包含n个绝对值不超过1000的浮点数，代表各个样本数据。

输出
输出一行，包含一个浮点数，表示均值，精确到小数点后4位。

样例输入
2
1.0 3.0

样例输出
2.0000


************************************************************************************/