#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int a,b,c;
  cin >> a >> b >> c;

  //ֱ����max ��������Ҫ�鷳�Ĵ���̨�ˡ�
  int m = max(a ,b);
  m = max( m , c);


  cout << m;

  return 0;
}
