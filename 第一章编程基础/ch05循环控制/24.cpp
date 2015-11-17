#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;


int main(int argc, char** argv) {

  int k;
  cin >>k;

  double sn =0;
  int n=1;
  while(true){
    sn += 1.0/n;
    if(sn > k) break;
    n++;
  }
  /*
  for(int i=1; sn <=k ;i++)
  {
     sn += 1.0/i;
  }

 */

  cout <<n;

  return 0;
}


