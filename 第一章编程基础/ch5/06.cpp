#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	
    int gold = 0;
	int silver =0;
	int tong =0;	

	for(int i=0; i<n; i++)
	{
		int a,b,c;
		cin >> a >> b >>c;
		gold += a;
		silver +=b;
		tong +=c;
		
	}
	
	cout << gold << " " << silver <<" " ;
	cout << tong << " " << gold + silver + tong;

	
	return 0;
}