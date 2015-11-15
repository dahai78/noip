
/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
	
	int n;
	cin >> n;	
	int ge = n %10;
	int shi = (n /10) %10;
	int bai = n /100;
	
	cout <<  ge << shi << bai ;         
	
	return 0;
}