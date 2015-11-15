#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace  std;
int main(int argc, char** argv) {

  long N;
  cin >> N;

  while( N!=1)
  {
    if(N%2==1)
    {
        cout << N << "*3+1=";
        N = 3*N + 1;
        cout << N << endl;

    }
    else
    {
        cout << N << "/2=";
        N = N/2;
        cout << N << endl;

    }

  }

  cout << "End";

  }
