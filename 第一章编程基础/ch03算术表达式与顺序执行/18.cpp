/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <cmath>
#include <iomanip>


// 定义函数 计算 两点间的距离。
float cal(float xm,float ym , float xn, float yn )
{
	return sqrt(  (xm-xn)*(xm-xn) + (ym-yn)*(ym-yn));
} 

using namespace std;
const  double pi = 3.14159;
int main(int argc, char** argv) {
	float x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >>x2 >>y2 >>x3 >>y3;
	float a = cal(x1,y1,x2,y2);
	float b = cal(x1,y1,x3,y3);	
	float c = cal(x2,y2,x3,y3);
	
	float r = (a+b+c)/2;
	cout << setprecision(2) << fixed << sqrt( r *(r-a) *(r-b)*(r-c));
}

/*
计算三角形面积
********************************************************************************
描述
平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少。

输入
输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。

输出
输出也是一行，输出三角形的面积，精确到小数点后两位。

样例输入
0 0 4 0 0 3

样例输出
6.00

提示
海伦公式

*/