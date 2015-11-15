/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   int  a,b;
   cin >> a >> b ;
   cout << setprecision(3) << fixed <<  double(b)/a * 100 <<"%" ;
   // 可能有其他方法。 我用这个。
}
/*
甲流疫情死亡率

描述
甲流并不可怕，在中国，它的死亡率并不是很高。请根据截止2009年12月22日各省报告的甲流确诊数和死亡数，计算甲流在各省的死亡率。

输入
输入仅一行，有两个整数，第一个为确诊数，第二个为死亡数。
输出
输出仅一行，甲流死亡率，以百分数形式输出，精确到小数点后3位。
样例输入
10433 60
样例输出
0.575%


*/