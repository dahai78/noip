#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {


  double h; //��¼��ǰ�߶�
  cin >>h;

  double dis=0; //��¼��n��ʱ��������ߴ�ʱ�� �˶��ľ��롣

  for(int i=1;i<=10;i++)
  {
      dis +=  h*3/2;
      h = h /2;
  }

  cout << dis - h << endl;   //���10����ص�ʱ��ľ��룬Ҫ��ȥ������
  cout << h;


  }
