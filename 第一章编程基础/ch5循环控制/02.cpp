#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  int n;
  cin >>n;

  double total=0;
  for(int i=0; i<n; i++)
  {
      double  years;
      cin >> years;
      total += years;

  }

  cout << setprecision(4) << fixed << total  / n;



}
