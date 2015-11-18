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
	ans =  n - ceil( (double)y/x);   // ceil 向上取整数  ，就是所谓进一法。 
	
	//也可以用 ans =  n - ceil( 0.1*y/x);     
	
	ans =  n - ceil( y*1.0/x);
	if(ans <= 0) ans = 0;
	cout << ans;
}


/*
苹果和虫子
*********************************************************************************************
描述
你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？

输入
输入仅一行，包括n，x和y（均为整数）。

输出
输出也仅一行，剩下的苹果个数

样例输入
10 4 9

样例输出
7

提示
注意：是要求完整的苹果数。

*/