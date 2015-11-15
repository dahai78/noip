#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;
int picture[101][101];


void check(int m, int n)
{

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << picture[i][j] << " ";
        }
        cout << endl;
    }

}
void  A( int &m, int &n)
{

    int temp[101][101];

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            temp[j][m + 1 - i] = picture[i][j];
        }
    }


    swap(m, n);

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            picture[i][j] = temp[i][j];
        }
    }

    //cout << "A command********************"<<endl;
    //cout << "m is " << m << "  n  is " << n << endl;
    //check(m,n);

}

void B( int &m, int &n)
{
    A(m, n);
    A(m, n);
    A(m, n);

    //cout << "B command********************"<<endl;
    //check(m,n);
}

void C(int m, int n)
{

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n / 2; j++)
        {
            swap( picture[i][j], picture[i][n + 1 - j]);
        }

    }

    //cout << "C command********************"<<endl;
    //check(m,n);
}

void D(int m, int n)
{


    for(int i = 1; i <= m / 2; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            swap( picture[i][j], picture[m + 1 - i][j]);
        }

    }
    //cout << "D command********************"<<endl;
    //check(m,n);

}



int main(int argc, char **argv)
{

    int m, n;
    cin >> m >> n;

    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
        {
            cin >> picture[i][j];
        }

    char c;
    while(cin.get(c))
    {
        switch(c)
        {
        case 'A':
            A(m, n);
            break;
        case 'B':
            B(m, n);
            break;
        case 'C':
            C(m, n);
            break;
        case 'D':
            D(m, n);
            break;
        }
    }

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << picture[i][j] << " ";
        }
        cout << endl;
    }


    return 0;

}