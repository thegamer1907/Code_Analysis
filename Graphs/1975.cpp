#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define lli long long int
#define pb push_back
#define mp make_pair
#define fo(i,n) for(i=0;i<(n);i++)
#define foo(i,x,n) for(i=(x);i<(n);i++)
#define endl "\n"
#define mod 1000000007

long long int i,j,ft;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lli n,m;
    cin>>n>>m;
    vector<lli> a(n);
    fo(i,n)
    cin>>a[i];
    vector<lli>v[n];
    vector<lli>degree(n,0);
    fo(i,n-1)
    {
        lli c,b;
        cin>>c>>b;
        v[c-1].pb(b-1);
        v[b-1].pb(c-1);
        degree[c-1]++;
        degree[b-1]++;
    }
    // cout<<degree[0]<<degree[1];
    vector<lli> visited(n,0);
    queue<pair<lli,lli>>q;
    if(a[0])
    q.push(mp(0,1));
    else
    q.push(mp(0,0));
    lli count=0;
    while(!q.empty())
    {
        pair<lli,lli>front=q.front();
        q.pop();
        if(front.S>m)
        continue;
        if(degree[front.F]==1&&front.F!=0)
        {
            // cout<<front.F;
            count++;
            continue;
        }
        for(lli i=0;i<v[front.F].size();i++)
        {
            if(visited[v[front.F][i]])
            continue;
            if(a[v[front.F][i]])
            {
                visited[v[front.F][i]]=1;
                q.push(mp(v[front.F][i],a[v[front.F][i]]+front.S));
            }
            else
            {
                visited[v[front.F][i]]=1;
                q.push(mp(v[front.F][i],0));
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
