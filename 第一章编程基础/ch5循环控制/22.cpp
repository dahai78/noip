#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;


int main(int argc, char** argv) {
   int n;
   cin >> n;

   int ans = 0;
   int max = 0;
   for(int  i=1; i<=n; i++)
   {
       int shou; //舒张压
       int  shu; // 舒张压
       cin >> shou >>shu;
       if( shou>=90 && shou <=140
           && shu >=60 && shu <=90){
               max++;
               if ( max > ans )
                     ans = max;
           }
        else {

                max=0;
             }
      }

      cout << ans;

      return 0;

}


