#include <bits/stdc++.h>
#include <sstream>
#include<ctime>
using namespace std;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define ii pair<int,int>
#define si set<int>
#define mii map<int,int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vs vector<string>
#define all(v) v.begin(),v.end()
//#define rep(i,n) for(int i = 0; i < n; ++i)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 1000000007
#define mul(x,y) ((ll)(x)*(y))%mod
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define INF 0x3f3f3f3f
ll MOD(ll a, ll b)
{
    if(a>b)
    return a-b;
    else
    return b-a;
}
int max3(int a,int b, int c)
{
    return max(c,max(a,b));
}
ll power(ll x,ll y, ll p)
{
    ll res = 1;      
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x)%p;
        y = y>>1; 
        x = (x*x)%p;  
    }
    return res;
}
ll logg(ll a)
{
    ll x=0;
    while(a>1)
    {
        x++;
        a/=2;
    }
    return x;
}
int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>A[i][j];
    int B[n][m];
    for(int j=0;j<m;j++)
    {
        B[0][j]=0;
        int pos=0;
        for(int i=1;i<n;i++)
        {
            if(A[i][j]>=A[i-1][j])
            {
                B[i][j]=pos;
            }
            else
            {
                pos=i;
                B[i][j]=pos;
            }
        }
    }
    vi C(n);
    for(int i=0;i<n;i++)
    {
        int r=B[i][0];
        for(int j=1;j<m;j++)
            r=min(B[i][j],r);
        C[i]=r;
    }
    int k;
    cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        if(C[r-1]<=l-1)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}    
