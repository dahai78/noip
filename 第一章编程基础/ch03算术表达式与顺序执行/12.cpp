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

/*
计算球的体积

********************************************************************************************************
描述
对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π= 3.14。

现给定r，求V。

输入
输入为一个不超过100的非负实数，即球半径，类型为double。

输出
输出一个实数，即球的体积，保留到小数点后2位。

样例输入
4

样例输出
267.95

*/