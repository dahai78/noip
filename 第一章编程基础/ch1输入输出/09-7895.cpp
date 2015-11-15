/*
  江苏省黄桥中学  戴海源  版权所有   程序仅供参考  交流联系  626071473@qq.com  
*/
#include <iostream>
#include <iomanip>
using namespace  std;

int main(int argc, char** argv) {
    char c;
    cin >> c;

    cout <<"  "<< c << endl;
    cout << " "<< c << c << c << endl;
    cout << c << c << c << c << c << endl;
    cout << " " << c << c << c << endl;
    cout <<"  "<< c << endl;
}

/*

字符菱形


描述
给定一个字符，用它构造一个对角线长5个字符，倾斜放置的菱形。

输入
输入只有一行， 包含一个字符。
输出
该字符构成的菱形。
样例输入
*
样例输出
  *
 ***
*****
 ***
  *
*/