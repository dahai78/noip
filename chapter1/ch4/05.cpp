#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  long x , y;
  //  ��int ������ȫ��ͨ�����в�������
  cin >> x >> y ;


  if(x>y) cout << ">";
  else if (x == y)
            cout << "=";
        else
            cout << "<";

  return 0;
}
