#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int n;
int num[100001];

int search(int x){
	int left=1;
	int right=n;
	int ans=0;
	while(left < right)	{

		int middle = (left+right)/2;
		/*
		cout << "left is " << left << " ";
		cout << "right is " << right << " ";
		cout <<"middle is "<< middle <<endl;

		*/

		if( num[middle] == x) {
			 ans=num[middle];
			 return ans;
		}

		if ((left+1==right) && (num[left]<x) && (num[right]>x) ){

			 ans = ( fabs(num[left] - x) <= fabs( num[right]-x)) ? num[left] : num[right];
			 return ans;

			}

		if( x > num[middle] )
            left = middle+1;
		else right=middle-1;
	}

	return num[left];
}

int main(int argc, char** argv) {

   //freopen("find.in","r",stdin);
    //freopen("find.out","w",stdout);


	cin >> n;
	for(int i=1;i<=n;i++)
	  cin >> num[i];

	int m;
	cin >> m;
	for(int i=1;i<=m;i++){
		int x;
		cin >> x;
		cout << search( x ) << endl;
		//cout << "************"<<endl;
	}

	return 0;
}
