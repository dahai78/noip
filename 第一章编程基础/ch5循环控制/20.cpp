#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace  std;

const  int yue = 300;

int main(int argc, char** argv) {
    int m;   // 库存
    cin >> m;

    int n;    //总人数
    cin >> n;


    int man = 0;   //取到药的人数
    for(int i=1; i<=n; i++)
    {
        int yao;
        cin >> yao;

        if( yao <= m ) {
            man++;
            m -= yao;    //库存减少
        }
    }
      // 当前病人没有取到药品，下一个病人可能取到 ^_^

    cout << n - man;


  }


/*
药房管理   http://noi.openjudge.cn/ch0105/20/
***********************************************
描述
   随着信息技术的蓬勃发展，医疗信息化已经成为医院建设中必不可少的一部分。计算机可以很好地辅助医院管理医生信息、病人信息、药品信息等海量数据，使工作人员能够从这些机械的工作中解放出来，将更多精力投入真正的医疗过程中，从而极大地提高了医院整体的工作效率。
    对药品的管理是其中的一项重要内容。现在药房的管理员希望使用计算机来帮助他管理。假设对于任意一种药品，每天开始工作时的库存总量已 知，并且一天之内不会通过进货的方式增加。每天会有很多病人前来取药，每个病人希望取走不同数量的药品。如果病人需要的数量超过了当时的库存量，药房会拒 绝该病人的请求。管理员希望知道每天会有多少病人没有取上药。

输入
共3行
第一行是每天开始时的药品总量m
第二行是这一天取药的人数n（0 < n <= 100）
第三行共有n个数，分别记录了每个病人希望取走的药品数量（按照时间先后的顺序），两数之间以空格分隔
输出
只有1行，为这一天没有取上药品的人数。
样例输入
30
6
10 5 20 6 7 8
样例输出
2

*/
