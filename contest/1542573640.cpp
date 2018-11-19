//Template by karthik171998

#include <bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-result"
/*------------------------------------------------------------------------*/
#define For(i,a,b) for((i)=(a);(i)<(b);++(i))
#define Fore(i,a,b) for((i)=(a);(i)<=(b);++(i))
#define rof(i,a,b) for((i)=(a);(i)>=(b);--(i))
/*-------------------------------------------------------------------------*/
#define inf (long long)4e18
#define xx first
#define yy second
#define pb push_back
#define PB pop_back()
#define mp make_pair
#define mod 1000000007
#define pi 3.1428571
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define sqr(a) (((a) * (a)))
#define L(x) ((x)<<1)
#define R(x) (((x)<<1)+1)
#define ct(a) cout<<a<<"\n"
#define ct2(a,b) cout<<a<<" "<<b<<"\n"
#define ct3(a,b,c) cout<<a<<" "<<b<<" "<<c<<"\n"
#define endl "\n"
/*---------------------------------------------------------------------------*/
typedef long long ll;
typedef vector< pair <ll,ll> >vect;
typedef vector<ll> vi;
typedef map<string,ll> ms;
typedef unsigned long long ull;
typedef long double ld;
/*---------------------------------------------------------------------------*/
ll gcd(ll a, ll b)
{
	if(b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
	return ((a*b)/gcd(a,b));
}
/*----------------------------------------------------------------------------*/
//Variables and functions for graph
//Undirected graph

/*vi adj[1000000];
bool visited[1000000]={false};
void add_edge(ll a,ll b)
{
    adj[a].pb(b);
    adj[b].pb(a);
}
/*-----------------------------------------------------------------------------*/

//end of template.
int main()
{   
	iOS;
	ll i,j,n,t;
	string a,ar;
	cin>>a;
	cin>>n;
	int flag=0;
	ll c=0;
	ll c1=0;
	For(i,0,n)
	{
		cin>>ar;
		if(ar==a)
		{
			flag=1;
		}
		if(ar[0]==a[1])
		{
		c++;	
		}
	   if(ar[1]==a[0])
		{
		c1++;
		}
	}
	if((c1>0&&c>0)||flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}


