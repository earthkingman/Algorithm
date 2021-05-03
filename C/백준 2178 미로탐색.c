#include <bits/stdc++.h>
using namespace std;

int M,N;
int in[100 + 1][100 + 1];
int visit[100 + 1][100 + 1];

bool check(int y, int x)
{
    if (y < 1 || y N || x < 1 || x > M)
        return false;
    if (in[y][x] == 0)
        return false;
    if (visit[y][x])
        return false;
    return true;
}

int main(void)
{
    int cy;
    int cx;
    int cc;
    scanf("%d%d", &N, &M);
    for (int y = 1; y <= N; y++)
    {
        for (int x = 1; x <= M; x++)
        {
            scanf("%d", &in[y][x]);
        }
    }
    queue<int> qy, qx, qc;
    qy.push(1);
    qx.push(1);
    qc.push(1);
    int count = 0;
    while (qy.empty() == false)
    {
        cy = qy.front(); 
        qy.pop();
        cx = qx.front(); 
        qy.pop();
        cc = qc.front(); 
        qy.pop();
    }

}