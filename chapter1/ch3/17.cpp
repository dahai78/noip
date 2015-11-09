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