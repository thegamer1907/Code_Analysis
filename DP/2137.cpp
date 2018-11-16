#include<bits/stdc++.h>
#define ll long long int
#define mi map<int,int>
#define mcr map<char,int>
#define MX 1e5 + 7
using namespace std;
vector<int> v(MX);
vector<ll> l(MX);
void solve(int a[],int n)
{
    ll i,j;
    for(i = n;i>=1;i--)
    {
        if(v[a[i]] == 0)
        {
            l[i] = l[i+1]+1;
            v[a[i]] = 1;
        }else{
            l[i] = l[i+1];
        }
    }
}
int main()
{
    int n,m,x,i,j,k,c;
    while(cin>>n>>m)
    {
        int a[n+5];
        for( i = 1;i<=n;i++)
        {
            cin>>a[i];
        }
        solve(a,n);
        while(m--)
        {
            cin>>x;
            cout<<l[x]<<endl;
        }
        l.clear();
        v.clear();
    }
    return 0;
}
