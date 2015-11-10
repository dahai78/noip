#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
   int  a,b;
   cin >> a >> b ;
   cout << a/b <<" "<< a%b;   // %运算只适合整数 求余
}
