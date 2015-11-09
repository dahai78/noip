/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>

using namespace  std;

int main(int argc, char** argv) {

	int a,b,c;

	cin >> a >> b >> c;
	cout << setw(8) << a <<" " ;   // setw() 这只宽度（width）。 对后面的输出起作用一次
	cout << setw(8) << b << " ";
	cout << setw(8) << c;
	return 0;
}

/*

对齐输出

描述
读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。

输入
只有一行，包含三个整数，整数之间以一个空格分开。
输出
只有一行，按照格式要求依次输出三个整数，之间以一个空格分开。
样例输入
123456789 0 -1
样例输出
123456789        0       -1
*/