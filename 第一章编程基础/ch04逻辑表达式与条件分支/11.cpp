/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  
  if( n!=1 && n!=3 && n!=5)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}

/************************************************************************************
 
晶晶赴约会            http://noi.openjudge.cn/ch0104/11/


描述
晶晶的朋友贝贝约晶晶下周一起去看展览，但晶晶每周的1、3、5有课必须上课，请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。

输入
输入有一行，贝贝邀请晶晶去看展览的日期，用数字1到7表示从星期一到星期日。

输出
输出有一行，如果晶晶可以接受贝贝的邀请，输出YES，否则，输出NO。注意YES和NO都是大写字母！

样例输入
2
样例输出

YES

************************************************************************************/
