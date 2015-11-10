/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

	float a;
	cin >> a;
	cout << setprecision(3) << fixed <<  a;  //setprecision() + fixed 设置小数点后面的位数 
	return 0;

}

/*

输出保留3位小数的浮点数

描述
读入一个单精度浮点数，保留3位小数输出这个浮点数。

输入
只有一行，一个单精度浮点数。
输出
也只有一行，读入的单精度浮点数。
样例输入
12.34521
样例输出
12.345
*/
