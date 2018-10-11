//PRINCE
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
#define pb push_back 
#define mp make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define ll long long int 
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll power(ll x,ll n){if(n==0)return 1;if(n%2)return x*power(x*x,(n-1)/2);return power(x*x,n/2);}
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define MOD 1000000007
int main()
{

	//kiimati 4 line for sublime text
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);//FAST
    ll n,t;cin>>n>>t;
    int A[n];
    rep(i,0,n)
        cin>>A[i];
    vector<ll>pre;
    pre.pb(A[0]);
    rep(i,1,n)
    {
        pre.pb(pre[i-1]+A[i]);
    }
    int cnt=0;
    if(pre[n-1]<=t)
    {
        cout<<n;
    }
    else
    {
        vector<ll>:: iterator it;
        for(int i=1;i<n;i++)
        {
           ll x=pre[i-1];
           it=upper_bound(pre.begin(),pre.end(),x+t);
           cnt=max(cnt,(int)(it-(pre.begin()))-i);
        }
        cout<<cnt;
    }

 }