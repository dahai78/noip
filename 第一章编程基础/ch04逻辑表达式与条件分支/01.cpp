/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int N;
  cin >> N;
  if (N > 0)
    cout <<"positive";
  else if (N==0)
            cout << "zero";
        else
            cout << "negative";

  return 0;
}


/************************************************************************************
判断数正负

总时间限制: 1000ms 内存限制: 65536kB

描述
给定一个整数N，判断其正负。

输入
一个整数N(-109 <= N <= 109)

输出
如果N > 0, 输出positive;
如果N = 0, 输出zero;
如果N < 0, 输出negative

样例输入
1

样例输出
positive







**************************************************************************************/