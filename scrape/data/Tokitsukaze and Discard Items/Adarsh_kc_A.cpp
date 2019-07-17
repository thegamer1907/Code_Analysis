#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define lastl '\n'
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vii vector <pair<ll,ll> >
#define viii vector <pair<ll,pair<ll,ll> > >
#define pb push_back
#define all(v) (v).begin(),(v).last()
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define input(a,n) fr(i,0,n)cin>>arr[i]
#define output(a,n) fr(i,0,n)cout<<arr[i]<<" "
#define dbg cout<<"hurr"<<lastl;
#define dbg2 cout<<"hurr2"<<lastl;
#define md 1000000007
#define inf 999999999999999999
#define sp << " " <<
#define pi 3.14159265358979323846
#define fixd(x) cout << fixed << setprecision(x);
#define sz size()
 
int main()
{
	ll n,m,k,e=0,ans=1,last,res;
	cin >> n >> m >> k;
	ll arr[m];
	input(arr,m);
	if(arr[0]%k!=0)
		last=((arr[0]/k)+1)*k;
	else
		last=arr[0];
	fr(i,0,m)
	{
		if(arr[i]<=last)
			e++;
		else
		{
			  ans++;
			  last=last+e;
			  ll temp=0;
			  if(last<arr[i])
			   	temp=(arr[i]-last)/k-1;
			  last=last+ k*temp ;
			  while(last<arr[i])
			  	last=last+k;
			  e=1;
			  res*=k;
		}
		res++;
	}
	cout << ans;
}