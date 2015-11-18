/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/

#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
	
    cout << sizeof("Hello, World!");
	
	return 0;
}


/*
Hello, World!的大小

描述
还记得在上一章里，我们曾经输出过的“Hello, World!”吗？它虽然不是本章所涉及的基本数据类型的数据，但我们同样可以用sizeof函数获得它所占用的空间大小。
请编程求出它的大小，看看跟你设想的是否一样？

输入
无。

输出
一个整数，即“Hello, World!”的大小。

样例输入
（无）

样例输出
（不提供）

提示
“Hello, World!”实际上是字符串类型，将在1.7章中详细介绍。


*/