#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int k;
  cin >> k;

  if(k==1 || k==2)
    {
        cout << 1;
    }
  else
    {
        int a,b;
        a=1;b=1;

        int i=3;
        int ans=0;
        while(i<=k)
        {
            ans = a+b;
            a=b;
            b=ans;
            i++;
        }
        cout << ans;
    }


/****************
    int f[47];
    f[1]  = f[2] =1;
    for(int i=2; i<=k ; i++)
    {
       f[i] = f[i-1] + f[i-2];
    }

    cout << f[k];

*****************/


}
