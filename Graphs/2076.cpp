#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m;
bool vis[20004];
int bfs()
{
    queue<pair<int,int>> q;
    q.push({n,0});
    vis[n] = 1;
    while(!q.empty())
    {
        int val = q.front().first;
        int dis = q.front().second;
        q.pop();

        if(val == m) return dis;
        if(val < m && !vis[val*2])   q.push({val*2,dis+1}), vis[val*2] = 1;
        if(val > 0 && !vis[val-1])   q.push({val-1,dis+1}), vis[val-1] = 1;
    }



}

int main()
{

    cin >> n >>m;


    cout <<bfs();

    return 0;
}
