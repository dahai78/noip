/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	float r1,r2;
	cin >> r1 >> r2;
	
	cout << setprecision(2) <<  fixed <<  1/( 1/r1 + 1/r2);
	
      
	
	return 0;
}

/*
计算并联电阻的阻值

总时间限制: 1000ms 内存限制: 65536kB

描述
对于阻值为r1和r2的电阻，其并联电阻阻值公式计算如下：

R = 1/(1/r1 + 1/r2)

输入
两个电阻阻抗大小，浮点型，以一个空格分开。

输出
并联之后的阻抗大小，结果保留小数点后2位

样例输入
1 2

样例输出
0.67

提示
计算过程使用float类型

*/