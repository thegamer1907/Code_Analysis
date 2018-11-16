#include<bits/stdc++.h>
using namespace std;

vector < int > A[30005];
int n,endd;
bool visited[30005];
queue < int > B;

void Input()
{
    cin >> n >> endd;
    int a;
    for(int i=1;i<=n-1;i++)
    {
        cin >> a;
        A[i].push_back(i+a);
    }
}
bool bfs(int start)
{
    visited[start] = true;
    B.push(start);
    while(!B.empty())
    {
        int n = B.front();
        B.pop();

        if(n == endd)
            return 1;

        for(int i=0;i<A[n].size();i++)
        {
            int x = A[n][i];
            if(!visited[x])
            {
                B.push(x);
                visited[x] = true;
            }
        }
    }

    return 0;
}
int main()
{
    Input();
    int start = 1;

    if(bfs(start))
        cout << "YES\n";
    else
        cout << "NO\n";
}
