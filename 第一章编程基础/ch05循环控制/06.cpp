/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	
    int gold = 0;
	int silver =0;
	int tong =0;	

	for(int i=0; i<n; i++)
	{
		int a,b,c;
		cin >> a >> b >>c;
		gold += a;
		silver +=b;
		tong +=c;
		
	}
	
	cout << gold << " " << silver <<" " ;
	cout << tong << " " << gold + silver + tong;

	
	return 0;
}

/*********************************************************************************
:奥运奖牌计数

    查看
    提交
    统计
    提问

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
输入
    输入n＋1行，第1行是A国参与决赛项目的天数n，其后n行，每一行是该国某一天获得的金、银、铜牌数目，以一个空格分开。
输出
    输出1行，包括4个整数，为A国所获得的金、银、铜牌总数及总奖牌数，以一个空格分开。
样例输入

    3
    1 0 3
    3 1 0
    0 3 0

样例输出

    4 4 3 11




************************************************************************************/