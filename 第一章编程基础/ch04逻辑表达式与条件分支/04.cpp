#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  char ch;
  //cin >> ch; �޷����ո�
  cin.get(ch);
  //cout  << ( ( ch%2==0) ? "NO" : "YES" );
  cout <<  ( (ch%2==0) ? "NO" : "YES"  );   // ��Ŀ���������Ϊ�˷�ֹ���ȼ������⣬�������ţ�

  return 0;
}
