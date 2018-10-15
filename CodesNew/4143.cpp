#include <bits/stdc++.h>
#include <sstream>
#include<ctime>
using namespace std;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
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
int MOD(int a, int b)
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
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
int main()
{
    int n,q;
    cin>>n>>q;
    vll A(n);
    for(int i=0;i<n;i++)
    cin>>A[i];
    vll B(n);
    B[0]=A[0];
    for(int i=1;i<n;i++)
    B[i]=B[i-1]+A[i];
    ll sum=0;
    ll t;
    while(q--)
    {
        cin>>t;
        sum+=t;
        vll::iterator it=upper_bound(all(B),sum);
        
        if(it!=B.end())
        {
            int y=it-B.begin();
            
            cout<<n-y<<endl;
        }
        else
        {
            cout<<n<<endl;
            sum=0;
        }
    }
}