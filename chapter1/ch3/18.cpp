/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <cmath>
#include <iomanip>

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