#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;


int main(int argc, char** argv) {

 int n;
 cin >> n;

 do{
   cout << n % 10 << " ";
   n = n/10;
  }while(n>0);


  return 0;
}


