#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int n;
  cin >>n;

  int total=0;
  for(int i=0; i<n; i++)
  {
      int years;
      cin >> years;
      total += years;

  }

  cout << setprecision(2) << fixed << total *1.0 / n;
  
}
/***************************************

求平均年龄查看提交统计提问总时间限制: 1000ms内存限制: 65536kB
描述
班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。

输入
第一行有一个整数n（1<= n <= 100），表示学生的人数。其后n行每行有1个整数，表示每个学生的年龄，取值为15到25。
输出
输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。
样例输入
2
18
17
样例输出
17.50提示
要输出浮点数、双精度数小数点后2位数字，可以用下面这种形式： 

printf("%.2f", num);
来源
2005~2006医学部计算概论期末考试
****************************************************************/
