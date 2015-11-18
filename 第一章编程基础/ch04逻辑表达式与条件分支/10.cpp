/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
 int chinese, math;
 cin >> chinese >> math;

 int ans;

 if(chinese>=60 && math <60 || chinese<60 && math>=60)
    ans = 1;
 else
    ans = 0;

 cout << ans;

  return 0;
  
}


/************************************************************************************
有一门课不及格的学生         http://noi.openjudge.cn/ch0104/10/

总时间限制: 1000ms 内存限制: 65536kB

描述
给出一名学生的语文和数学成绩，判断他是否恰好有一门课不及格（成绩小于60分）。

输入
一行，包含两个在0到100之间的整数，分别是该生的语文成绩和数学成绩。

输出
若该生恰好有一门课不及格，输出1；否则输出0。

样例输入
50 80

样例输出
1


************************************************************************************/
