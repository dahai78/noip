/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {

 	char c;
 	cin >> c;

    int  n;
    cin >> n;

    float f;
    cin >> f;

    double d;
    cin >> d;

    cout << c <<' ';
    cout << n <<' ';
    cout <<  setprecision(6) << fixed << f <<' ';
    cout <<  setprecision(6) << fixed << d;
	return 0;
}

/*

空格分隔输出

读入一个字符，一个整数，一个单精度浮点数，一个双精度浮点数，然后按顺序输出它们，并且要求在他们之间用一个空格分隔。输出浮点数时保留6位小数。

输入
共有四行：
第一行是一个字符；
第二行是一个整数；
第三行是一个单精度浮点数；
第四行是一个双精度浮点数。
输出
输出字符、整数、单精度浮点数和双精度浮点数，之间用空格分隔。
样例输入
a
12
2.3
3.2
样例输出
a 12 2.300000 3.200000

*/