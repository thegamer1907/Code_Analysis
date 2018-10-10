#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int,int> mpii;
typedef map<string,int> mpsi;
typedef set<int> si;
typedef set<ll> sll;
#define pb push_back
#define INF 1000000000
#define LINF (ll)INF*INF
#define all(x) x.begin(),x.end()
ll getans(ll k,ll n)
{
	ll a=0;
	if(k==0)
		return -1;
	while(n)
	{
		a+=min(k,n);
		n-=min(k,n);
		n = n-n/10;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	ll min=1,max=n+1;
	ll mid;
	ll cnt=0;
	while(min<max&&cnt<100)
	{
		cnt++;
		mid=(min+max)/2;
		ll a = getans(mid,n);
		if(a<=n/2)
		{
			min=mid;
		}
		else max=mid;
//		cout<<mid<<endl;
	}
//	cout<<"YO\n";
/*	if(mid!=1){
	if(getans(mid-1,n)>=(double)n/2)
	{
		cout<<mid-1<<endl;
		return 0;
	}
	}
	if(getans(mid,n)>=(double)n/2)
	{
		cout<<mid<<endl;
	}
	else cout<<mid+1<<endl;
	mid+=2;
	while(getans(mid,n)>=(double)n/2)
		mid--;
	mid++;
	cout<<mid<<endl;
*/
	while(1)
	{
		if(getans(mid,n)>=(n+1)/2)
		{
			cout<<mid<<endl;
			return 0;
		}
		mid++;
	}
	return 0;
}
/*
67--> 65-->59-->57-->52-->50-->45-->43-->39-->37
	-->34-->32-->29-->27-->25-->23-->21-->19-->18
	-->16-->15-->13-->12-->10-->9
*/
