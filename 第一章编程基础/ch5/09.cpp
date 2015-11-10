#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char** argv) {
	
	int k;
	cin >> k;
	

	int t1 =0;
	int t5 = 0;
	int t10 =0;
	for(int i=0; i<k; i++)
	{
		int n;
		cin >> n;
		if( n==1)  t1++;
		if( n==5)  t5++;
		if( n==10) t10++; 
		
	}
	
	cout << t1 << endl;
	cout << t5 << endl;
	cout << t10;

	
	return 0;
}
