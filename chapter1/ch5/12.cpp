#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;
int main(int argc, char** argv) {
		
	double total;
	cin >> total;
	
		int n;
	cin >> n;
	
	for(int i=1;i<=n;i++)
	{
		total *= (1+0.001);
	}
	
	cout << setprecision(4) << fixed << total;
    
	return 0;
}