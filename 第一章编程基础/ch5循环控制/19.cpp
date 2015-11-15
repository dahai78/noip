#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;

const  int yue = 300;

int main(int argc, char** argv) {
   bool  flag = true;
   int mother =0;
   int jingjing =0;
   for(int i=1;i<=12;i++){
     int m;
     cin >> m;
     if( jingjing + 300 < m )
        {

         flag = false;
         cout <<"-" <<i;
         //system("pause");
         return 0;
        }
     else{

        int yu = (jingjing + 300 - m) % 100;
        mother += jingjing + 300 -m -yu ;
        jingjing = yu;
/*
        cout << "第"<<i <<"月" ;
        cout << "消费 " << m;
        cout << "津津 " << jingjing<< endl;
        cout << "妈妈 " <<  mother << endl;

 */
     }
   }

  if(flag==true)
    cout << jingjing + mother *( 1+ 0.2);


  }

