#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;

int main()
{
    int m,k;
    cin >> m >> k;

    bool ans=true;
    if( m%19 !=0)
        ans = false;

    int total =0;
    if(ans == true){
       while(  m>0)
        {
            if( m%10 ==3 ) total++;
            m = m/10;
        }
    }

    if(total !=k) ans=false;

    if(ans == true)
        cout <<"YES";
    else
        cout <<"NO";




  return 0;
}


