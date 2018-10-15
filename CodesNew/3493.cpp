#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN   100001
#define mp make_pair
#define endl '\n'
#define ff first
#define ss second
#define mapcl map<char,ll>
#define mapll map<ll,ll>
#define pll pair<ll,ll>
#define cmp complex<double>
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286 
#define inf LLONG_MAX
#define flush fflush(stdout)
#define vll vector<ll>
#define all(v) v.begin(),v.end()
#define fr(i,z,n) for(ll i=z;i<n;i++)
void fast(){ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
typedef long long ll;
bool coll(pair<ll,ll> p1,pair<ll,ll> p2,pair<ll,ll> p3){if((p3.ss-p2.ss)*(p2.ff-p1.ff)==(p2.ss-p1.ss)*(p3.ff-p2.ff))return true;else return false;}
void pv(vector<auto> v){for(ll i=0;i<(ll)v.size();i++)cout<<v[i]<<" ";cout<<endl;}
void pvsl(vector<auto> v){for(ll i=0;i<(ll)v.size();i++)cout<<v[i]<<" ";}
void in(vector<auto> &v, ll n){v.resize(n);for(ll i=0;i<n;i++)cin>>v[i];}
void sortv(vector<ll> &v){sort(v.begin(),v.end());}
//all variables and functions after this line
int main()
{
	ll n,m;
	cin>>n>>m;
	ll mx=0;
	priority_queue <ll,vector<ll>,greater<int> > q;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		mx=max(mx,x);
		q.push(x);
	}
	mx+=m;
	while(m--)
	{
		ll x=q.top();
		x++;
		q.pop();
		q.push(x);
	}
	ll x=0;
	while(!q.empty())
	{
		x=q.top();
		q.pop();
	}
	cout<<x<<" "<<mx<<endl;
}
