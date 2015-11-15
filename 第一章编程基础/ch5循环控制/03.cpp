#include <iostream>
#include <iomanip>

using namespace std;



int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	int total =0;
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		total += x;
		
	}
	
	cout << total << " ";
	cout << setprecision(5) << fixed << total*1.0 / n ;
	
	return 0;
	
	
}
