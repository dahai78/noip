/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
    float  f = 323.23;
    double  d = 23223.23;
    cout <<  sizeof( f ) << ' ' << sizeof( d );
	
	return 0;
}
/*
浮点型数据类型存储空间大小

分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。

输入
无。

输出
一行，两个整数，分别是两个变量的存储空间大小，用一个空格隔开。

样例输入
（无）

样例输出
（不提供）

*/