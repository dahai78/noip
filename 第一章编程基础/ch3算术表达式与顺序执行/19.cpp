/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;

const  double pi = 3.14159;

int main(int argc, char** argv) {
  long long a, b;
  cin >> a >> b;  
  
  cout << a*b;  // 如果用 int a, int a 算出的结果为int类型，  可能会超出Int范围

}


/*
A*B问题   http://noi.openjudge.cn/ch0103/19/
*************************************************************************************
描述
输入两个正整数A和B，求A*B。

输入
一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
输出
一个整数，即A*B的值。
样例输入
3 4
样例输出
12
提示
注意乘积的范围和数据类型的选择

*/