#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double  calc(int m){
    return ceil( m*1.0 / 70 ) * 0.1  ;

}

int main(){
   int n;
   cin>>n;
   double total;
   for(int i=1; i<=n; i++){
     int m;
     cin >> m;
    total += calc(m);     
  }  
  cout << setprecision(1) << fixed << total;
}