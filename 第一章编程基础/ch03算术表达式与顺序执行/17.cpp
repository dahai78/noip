/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const  double pi = 3.14159;
int main(int argc, char** argv) {
	
	double  a, b, c, r ,ans;
	cin >> a >> b >> c;	
	r = (a+b+c)/2;
	
	//if( r-a >0 && r-b >0 && r-b>0)
	if( (a+b>c) && (a+c>b) && (a+b>c))
	  cout << setprecision(4)	<< fixed << sqrt( r*(r-a)*(r-b)*(r-c) );
    else cout <<"Data Error";
}
/*
用边长求三角形面积
************************************************************************************
描述
给定三条线段的长度，判断这三条线段是否能够构成三角形。如果能够构成，则计算其面积。

输入
输入只有一行，包含三个浮点数，分别表示三角形三边的边长，数与数之间以一个空格分开。
输出
对于可以构成三角形的情况，输出三角形的面积，保留4位小数。
对于不能构成三角形的情况， 输出“Data Error”。
样例输入
3 4 5
样例输出
6.0000
提示
三边长满足任何两边之和大于第三边，便可构成三角形。

设三边长分别为a,b,c, 令r=(a+b+c)/2,
则三角形的面积 s = sqrt(r(r-a)(r-b)(r-c))

平方根计算可以使用sqrt

请使用双精度



*/