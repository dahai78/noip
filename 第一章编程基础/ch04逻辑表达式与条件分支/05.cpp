/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  long x , y;
  //  如果用int ，不能全部通过所有测试数据
  cin >> x >> y ;


  if(x>y) 
	  cout << ">";
  else if (x == y){
            cout << "=";
		}
		else{
            cout << "<";
		}

  return 0;
}
/************************************************************************************
整数大小比较    http://noi.openjudge.cn/ch0104/05/

总时间限制: 1000ms 内存限制: 65536kB
描述

输入两个整数，比较它们的大小。

输入
一行，包含两个整数x和y，中间用单个空格隔开。
0 <= x < 2^32, -2^31 <= y < 2^31。

输出
一个字符。
若x > y，输出 > ；
若x = y，输出 = ；
若x < y，输出 < ；

样例输入
1000 100

样例输出
>

************************************************************************************/
