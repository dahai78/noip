#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main(int argc, char** argv) {
	

	int a,n;
	cin >> a >>n;
	
	//cout << (int)pow(a,n);
	
    int ans =1;
    for(int i=1;i<=n;i++)
    {
    	ans *= a;
    }
    
    cout << ans;
    
    
	return 0;
}