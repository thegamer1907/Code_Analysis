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
    int n;
    cin>>n;
    vi B(n+1,0);
    B[1]=1;
    int x=1;
    si A[n+2];
    A[1].insert(1);
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(B[i]==0&&B[a]==0)
        {
            x++;
            B[i]=B[a]=x;
            A[x].insert(i);
            A[x].insert(a);
        }
        else if(B[i]==0||B[a]==0)
        {
            int j=i;
            if(B[j]==0)
                swap(a,j);
            B[a]=B[j];
            A[B[j]].insert(a);
        }
        else
        {
            if(B[a]!=B[i])
            {
                int j=i;
                if(A[B[a]].size()>A[B[j]].size())
                    swap(a,j);
                int k=B[a];
                for(auto it=A[k].begin();it!=A[k].end();it++)
                {
                    A[B[j]].insert(*it);
                    B[*it]=B[j];
                }
            }
        }
    }
    si C;
    for(int i=1;i<=n;i++)
    {
        C.insert(B[i]);
    }
    cout<<C.size();
} 