/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
    int n;
    cin >>n ;

    bool  b ; 
    b = n;      //非零的数被解释称 true 

    n = b;      //true 被解释称 1    false 解释成 0

    cout << n;   
	
	return 0;
}
/*
整型与布尔型的转换

描述
将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？

输入
一个整型范围内的整数，即初始时整型变量的值。

输出
一个整数，经过上述过程后得到的结果。

样例输入
3

样例输出
1

*/