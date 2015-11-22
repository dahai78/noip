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
	
	
	int my_max =0;
	int my_min =INT_MAX;     // 最大的整数   #include <climits> 里面给出了值
	for(int i=0; i<n; i++)
	{
		int score;
		cin >> score;
		if(score > my_max ) 
		   my_max = score;
		if(score < my_min)
		   my_min = score;
	}
	
	cout << my_max - my_min;

	
	return 0;
}

/*********************************************************************************
整数序列的元素最大跨度值 
    
总时间限制:
    1000ms
内存限制:
    65536kB

描述

    给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。
输入
    一共2行，第一行为序列的个数n（1 <= n <= 1000)，第二行为序列的n个不超过1000的非负整数，整数之间以一个空格分隔。
输出
    输出一行，表示序列的最大跨度值。
样例输入

    6
    3 0 8 7 5 9

样例输出

    9


************************************************************************************/