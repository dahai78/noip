/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

	double a;
	cin >> a;
	cout << setprecision(12) << fixed <<  a;
	return 0;
}

/*

输出保留12位小数的浮点数

描述
读入一个双精度浮点数，保留12位小数，输出这个浮点数。

输入
只有一行，一个双精度浮点数。
输出
也只有一行，保留12位小数的浮点数。
样例输入
3.1415926535798932
样例输出
3.141592653580
*/