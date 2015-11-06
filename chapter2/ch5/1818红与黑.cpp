//版权所有 戴海源

#include <iostream>
#include <queue>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char ditan[20][20];
int W,H:
int X,Y;
  
struct Point{
	int x;
	int y;
	
};          

void read(){
	
	queue<Point> Q;
	  
    for(int i=0 ;i<H; i++)
       
       for(int j=0; j<W; j++)
          
          {
            cin >> ditan[i][j];
            if( ditan[i][j] =='@')
               {
               	 X=i; Y=j;
               }
          }
          
}

void work(int x,int y){
	
	Point p;
	p.x=x;  p.y=y;
	q.
	
}
 

int main(int argc, char** argv) {
	
	cin >> W >> H;
	
	while( !(W==0 && j==0))
	{
		work(X, Y);
		
		
		cin >> W >> H;
	}
	
          
          
	
	return 0;
}
