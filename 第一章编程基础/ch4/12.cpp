#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int n;
  cin>>n;

  double bike = 50 + n / 3.0;
  double walk = n / 1.2;

  if(bike < walk )
    cout <<"Bike";
  else if (bike > walk)
            cout << "Walk";
       else
            cout << "All";

  return 0;
}
