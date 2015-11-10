#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char** argv) {
	
	int m,n;
	cin >> m >> n;
	
	int total =0;
	for(int i=m; i<=n; i++)
	{
		if( i%2==1) 
		 total += i;
	}
	
	cout << total;

	
	return 0;
}