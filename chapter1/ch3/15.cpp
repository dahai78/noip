/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const  double pi = 3.14159;
int main(int argc, char** argv) {
	
	int n, x, y;
	cin >> n >> x >>y;
	int ans;
	ans =  n - ceil( (double)y/x);   // cel 向上取整数  ，就是所谓进一法。 
	//也可以用 ans =  n - ceil( 0.1*y/x);     
	
	ans =  n - ceil( y*1.0/x);
	if(ans <= 0) ans = 0;
	cout << ans;
}