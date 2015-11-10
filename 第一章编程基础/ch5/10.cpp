#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int main(int argc, char** argv) {
	
	int N,n;
	cin >> N >> n;
	
	int total =0;
	for(int i=0;i<N;i++ )
	 {
	 	int k;
	 	cin>>k;
	 	if(k==n) total++;
	 }

	cout << total;
	return 0;
}