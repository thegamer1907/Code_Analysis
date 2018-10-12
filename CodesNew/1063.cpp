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
ll func(vector<pair<ll ,ll> > A,int k)
{
    vll B(A.size());
    int n=A.size();
    for(int i=0;i<n;i++)
        B[i]=A[i].f+k*A[i].s;
    sort(all(B));
    ll sum=0;
    for(int i=0;i<k;i++)
        sum+=B[i];
    return sum;
}
int main()
{
    fastio;
    ll n,S;
    cin>>n>>S;
    vector<pair<ll,ll> > A(n);
    for(int i=0;i<n;i++)
    {
        cin>>A[i].f;
        A[i].s=i+1;
    }
    if(func(A,n)<=S)
    {
        cout<<n<<' '<<func(A,n);
        exit(0);
    }
    int beg=1,last=n-1,mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(func(A,mid)<=S&&func(A,mid+1)>S)
        {
            cout<<mid<<' '<<func(A,mid);
            exit(0);
        }
        else if(func(A,mid)>S)
            last=mid-1;
        else
            beg=mid+1;
    }
    cout<<0<<' '<<0;
}