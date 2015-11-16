#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(int argc, char** argv) {
	
	int n;
	cin >> n;
	
	
	int my_max =0;
	int my_min =INT_MAX;
	for(int i=0; i<n; i++)
	{
		int score;
		cin >> score;
		if(score > my_max ) 
		   my_max = score;
		if(score < my_min)
		   my_min = score;
	}
	
	cout << my_max - my_min;

	
	return 0;
}