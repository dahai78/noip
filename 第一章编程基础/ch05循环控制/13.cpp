/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int k;
  cin >> k;

  if(k==1 || k==2)
    {
        cout << 1;
    }
  else
    {
        int a,b;
        a=1;b=1;

        int i=3;
        int ans=0;
        while(i<=k)
        {
            ans = a+b;
            a=b;
            b=ans;
            i++;
        }
        cout << ans;
    }


/****************
    int f[47];
    f[1]  = f[2] =1;
    for(int i=2; i<=k ; i++)
    {
       f[i] = f[i-1] + f[i-2];
    }

    cout << f[k];

*****************/


}

/*********************************************************************************
菲波那契数列

    查看
    提交
    统计
    提问

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
    给出一个正整数k，要求菲波那契数列中第k个数是多少。
输入
    输入一行，包含一个正整数k。（1 <= k <= 46）
输出
    输出一行，包含一个正整数，表示菲波那契数列中第k个数的大小
样例输入

    19

样例输出

    4181


************************************************************************************/
