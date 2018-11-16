#include"bits/stdc++.h"
using namespace std;
#define NAME "500A"
#define grey 0
#define white 1
#define black -1

long n,t;
bool check=false;
vector<vector<long> > A(30001);
vector<long> trace(30001,white);

void Read()
{
    long x;
    cin>>n>>t;
    for(long i=1;i<=n;i++)
    {
        cin>>x;
        A[i].push_back(i+x);
    }
}

void DFS(long u)
{
    trace[u]=grey;
    for(long v=0;v<A[u].size();v++)
    {
        if(trace[A[u][v]]==white) DFS(A[u][v]);
        if(A[u][v]==t)
        {
            check=true;
            return;
        }
    }
    trace[u]=black;
}
int main()
{
//    freopen(NAME".inp","r",stdin);
//    freopen(NAME".out","w",stdout);
    Read();
    DFS(1);
    if(check==true) cout<<"YES";
    else cout<<"NO";
}
