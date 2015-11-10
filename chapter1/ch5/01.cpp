#include <iostream>
#include <iomanip>
//#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int n;
  cin >>n;

  int total=0;
  for(int i=0; i<n; i++)
  {
      int years;
      cin >> years;
      total += years;

  }

  cout << setprecision(2) << fixed << total *1.0 / n;



}
