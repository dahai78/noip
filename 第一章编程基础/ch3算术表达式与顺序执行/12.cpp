
/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const  double pi= 3.14;
int main(int argc, char** argv) {
	
	double r;
	cin >> r;
	
	cout << setprecision(2) << fixed << (double) 4/3 * pi * r *r *r;
          
          
	
	return 0;
}