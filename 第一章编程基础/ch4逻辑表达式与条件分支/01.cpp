#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;
int main(int argc, char** argv) {
  int N;
  cin >> N;
  if (N > 0)
    cout <<"positive";
  else if (N==0)
            cout << "zero";
        else
            cout << "negative";

  return 0;
}
