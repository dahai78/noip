#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	
	
	int m =0;
	for(int i=0; i<n; i++)
	{
		int score;
		cin >> score;
		if(score > m ) 
		   m = score;
	}
	
	cout << m;
	
	
	return 0;
}
