#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int a;
  cin >> a;

 /* if(  a%4==0  && !( a%100==0 && a%400 !=0) )
    cout << "Y";
  else
    cout << "N";
*/

  if(  a%4==0  &&  a%100!=0 ||  a%400 ==0 )
    cout << "Y";
  else
    cout << "N";

  return 0;
}
