#include <iostream>
#include <queue>
using namespace std;

char ditan[20][20];
int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
struct Point
{
    int x;
    int y;
};

int W, H;


int work(int m, int n)
{

    int answer = 0;
    queue<Point> Q;
    Point p = {m, n};
    Q.push(p);
    ditan[m][n] = '#';

    while( !Q.empty())
    {
        Point t = Q.front();
        Q.pop();
        answer++;
        for(int i = 0; i < 4; i++)
        {
            int newx = t.x + dx[i];
            int newy = t.y + dy[i];

            if	( newx >= 0 && newx < H  && newy >= 0 && newy < W && ditan[ newx ][ newy] == '.'  )
            {
                Point p = {newx, newy};
                Q.push(p);
                ditan[newx][newy] = '#';
            }
        }

    }

    return answer;

}


int main(int argc, char **argv)
{

    int startX, startY;

    while( true)
    {
        cin >> W >> H;
        if( W == 0 && H == 0) break;

        for(int i = 0; i < H; i++)
            for(int j = 0; j < W; j++)
            {
                cin >> ditan[i][j];
                if( ditan[i][j] == '@')
                {
                    startX = i;
                    startY = j;
                }
            }

        //check();

        cout << work(startX, startY) << endl;

    }

    return 0;
}

