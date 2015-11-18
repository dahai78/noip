/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  char ch;
  //cin >> ch; 无法读空格
  cin.get(ch);
  //cout  << ( ( ch%2==0) ? "NO" : "YES" );
  cout <<  (  (ch%2==0) ? "NO" : "YES"   );   // 三目运算符？：为了防止优先级出问题，加上括号！

  return 0;
}
/************************************************************************************

奇偶ASCII值判断             http://noi.openjudge.cn/ch0104/04/

总时间限制: 1000ms 内存限制: 65536kB

描述
任意输入一个字符，判断其ASCII是否是奇数，若是，输出YES，否则，输出NO 
例如，字符A的ASCII值是65，则输出YES，若输入字符B(ASCII值是66)，则输出NO

输入
输入一个字符

输出
如果其ASCII值为奇数，则输出YES，否则，输出NO

样例输入
A

样例输出
YES

************************************************************************************/
