#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {

 	char c;
 	cin >> c;

    int  n;
    cin >> n;

    float f;
    cin >> f;

    double d;
    cin >> d;

    cout << c <<' ';
    cout << n <<' ';
    cout <<  setprecision(6) << fixed << f <<' ';
    cout <<  setprecision(6) << fixed << d;
	return 0;
}
