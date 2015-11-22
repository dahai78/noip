/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	int total =0;
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		total += x;
		
	}
	
	cout << total << " ";
	cout << setprecision(5) << fixed << total*1.0 / n ;
	
	return 0;
	
	
}

/*********************************************************************************

求整数的和与均值

    查看
    提交
    统计
    提问

总时间限制:
    1000ms
内存限制:
    65536kB

描述

    读入n（1 <= n <= 10000）个整数，求它们的和与均值。
输入
    输入第一行是一个整数n，表示有n个整数。
    第2~n+1行每行包含1个整数。每个整数的绝对值均不超过10000。
输出
    输出一行，先输出和，再输出平均值（保留到小数点后5位），两个数间用单个空格分隔。
样例输入

    4
    344
    222
    343
    222

样例输出

    1131 282.75000

************************************************************************************/
