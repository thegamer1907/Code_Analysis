#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

vector<int> v[100005];
queue<int> q;
stack<int> s;
bool vis[100005];
int path[100005];

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=1;i<n;i++)
    {
        int a;
        cin >> a;
        v[i].pb(i+a);
        v[i+a].pb(i);
    }

    vis[1]=true;
    q.push(1);
    s.push(n);
    path[1]=-1;
    path[0]=-50;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        int sz=v[cur].size();

        for(int i=0;i<sz;i++)
        {
            int x=v[cur][i];

            if(!vis[x])
            {
                vis[x]=true;
                q.push(x);
                path[x]=cur;
            }
        }
    }

    int des=n;

    while(path[des]!=-1)
    {
        s.push(des);
        if(des==m) return(cout << "YES" << endl,0);
        des=path[des];
    }
    
    cout << "NO" << endl;


    return 0;
}