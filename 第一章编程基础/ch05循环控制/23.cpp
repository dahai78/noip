#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;


int main(int argc, char** argv) {
  int n;
  cin >>  n;

  int ans = 0;
  for(int i=1; i<=n; i++)
  {
      int m;
      cin >> m;

      int ge = m %10;
      int shi = ( m /10 ) % 10;
      int bai= ( m /100 ) %10;
      int qian = m /1000;
     //cout <<  qian << bai << shi << ge;
     if( ge - qian - bai -shi >0){
        ans++;
     }
  }

  cout << ans;

  return 0;
}


