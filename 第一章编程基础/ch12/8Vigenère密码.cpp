// ´÷º£Ô´ °æÈ¨ 
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include <cctype>
using namespace std;

char ming1(char mi, char key){
    
    int dis=  toupper(key) - 'A';
    char answer;
    if ( isupper(mi) ) answer = 'A' + 25 - ( 'Z' - toupper(mi)  + dis   ) % 26 ;
    else answer ='a' + 25 - ( 'Z' - toupper(mi)  + dis   ) %26;
    return answer;
}

char ming(char m, char key){
    int mi= toupper(m);
    key=toupper(key);
    int dis= (mi-key>=0) ?  mi-key : mi-key + 26;
    
	char answer;
    if( isupper(m) )
	   answer = 'A' + dis;
    else
	    answer = 'a' + dis;
    return answer;
}

void check(){
	for( char i ='a' ;i<='z';i++)
      {      	
        cout <<  ming(i,'c' );
      }  
     
      cout << endl;
    
	 for( char i ='a' ;i<='z';i++)
      {
          cout <<  i;
      }
}

int main1(){
	check();
	return 0;
}

int main(int argc, char** argv) {
	
	string key;
	string mi;
	cin >> key >> mi;
	
	
	int j=0;
	   	  
	for(int i=0; i<mi.length(); i++)
	   {
	      cout << ming( mi[i] ,  key[j] );
		  j = (j+1) % key.length();	  
	   	  
	   	
	   }
    

   
	return 0;

}


