#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;

const  int yue = 300;

int main(int argc, char** argv) {
   int n;
   cin >> n;

   for(int  i=0; i<n; i++)
   {
       int shou; //舒张压
       int  shu; // 舒张压
       cin >> shou >>shu;
       if( !(shou>=90 && shou <=140
           && shu >=60 && shu <=90)){

            cout <<i;
            break;
           }
    }

}
