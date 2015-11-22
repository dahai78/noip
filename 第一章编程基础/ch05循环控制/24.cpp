/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;


int main(int argc, char** argv) {

  int k;
  cin >>k;

  double sn =0;
  int n=1;
  while(true){
    sn += 1.0/n;
    if(sn > k) break;
    n++;
  }
  /*
  for(int i=1; sn <=k ;i++)
  {
     sn += 1.0/i;
  }

 */

  cout <<n;

  return 0;
}




/*********************************************************************************
级数求和

    查看
    提交
    统计
    提问

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。

    现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。 
输入
    一个整数K。
输出
    一个整数n。
样例输入

    1

样例输出

    2

来源
    NOIP2002复赛 普及组 第一题 


************************************************************************************/