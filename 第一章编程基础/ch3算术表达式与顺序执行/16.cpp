/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <cmath>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const  double pi = 3.14159;
int main(int argc, char** argv) {
	
	double  Xa,Ya, Xb,Yb;
	cin >> Xa >> Ya >> Xb >> Yb;
	double ans = sqrt( pow(Xb-Xa,2) +  pow(Yb-Ya, 2)  );
	cout << setprecision(3) << fixed << ans;
	
}