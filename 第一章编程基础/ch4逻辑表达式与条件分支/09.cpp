#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {

  int n;
  cin >>n;
  bool flag = false;

  if(n%3==0)
    {
        cout << 3 <<" ";
        flag = true;
    }

  if(n%5==0)
    {
        cout << 5 << " ";
        flag =true;
    }

  if(n%7==0)
  {
      cout << 7;
      flag = true;
  }

  if( flag==false )
     cout << 'n';


  return 0;
}
