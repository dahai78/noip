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
/*
计算线段长度
*****************************************************************************************************
描述
已知线段的两个端点的坐标A（Xa,Ya），B（Xb，Yb），求线段AB的长度。

输入
共两行。
第一行是两个实数Xa，Ya，即A的坐标。
第二行是两个实数Xb，Yb，即B的坐标。
输入中所有实数的绝对值均不超过10000。

输出
一个实数，即线段AB的长度，保留到小数点后3位。

样例输入
1 1
2 2

样例输出
1.414

*/