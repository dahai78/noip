#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	float r1,r2;
	cin >> r1 >> r2;
	
	cout << setprecision(2) <<  fixed <<  1/( 1/r1 + 1/r2);
	
          
          
	
	return 0;
}