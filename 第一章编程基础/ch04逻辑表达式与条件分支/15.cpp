/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int a,b,c;
  cin >> a >> b >> c;

  //直接用max 函数，不要麻烦的打擂台了。 
  int m = max(a ,b);
  m = max( m , c);


  cout << m;

  return 0;
}

/************************************************************************************
最大数输出                  http://noi.openjudge.cn/ch0104/15/

描述
输入三个整数,输出最大的数。

输入
输入为一行，包含三个整数，数与数之间以一个空格分开。

输出
输出一行，包含一个整数，即最大的整数。

样例输入
10 20 56

样例输出
56


************************************************************************************/
