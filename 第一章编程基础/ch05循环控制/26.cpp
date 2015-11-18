#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;

int main()
{

  int N;
  cin >> N;
  if(N<0)
  {cout<<'-';
   N = -N;
  }

  int ans=0;
  while(N>0){
    ans = ans *10 +  N % 10;
    N = N /10;
  }

  cout << ans;


  return 0;
}


