#include<bits/stdc++.h>
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define ll long long
#define M 1000000007
#define vc vector
#define vci vector<int>
#define si set<int>
#define pb push_back
#define pop pop_back
#define mii map<int,int>
#define msi map<string,int>
#define PI 3.14159265
#define r0 return 0
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll p[m];
    rep(i,0,m)
    {
        cin>>p[i];
    }
    ll ops=0,j=0,x=k,l;
    while(1)
    {
        l=0;
        if(p[j]>k)
            {
                ll t=(p[j]-k)/x;
                if((p[j]-k)%x)
                t++;
                k=k+x*t;
            }
        while(j<m&&k>=p[j])
        {
            j++;
            l++;
            if(j>=m)
            {
                ops++;
                cout<<ops;
                r0;
            }
        }
        k=k+l;
        ops++;
    }
    cout<<ops;
    return 0;
}