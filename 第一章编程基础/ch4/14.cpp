#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {

  int total =0;
  int w;
  char ji;
  cin >> w >> ji;

  if( w<=1000)
    total += 8;
  else
    total += 8 + ( ceil ( (w-1000) /500.0 ) * 4 ) ;
    // ���� 500.0  ��Ϊ�� ��ֹ �����������������ȥβ�͡�

  if(ji=='y')
    total += 5;

  cout << total;

  return 0;
}
