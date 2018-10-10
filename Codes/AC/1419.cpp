#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long
#define pii pair < int , int >
#define vi vector < int >
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define init(x, a) memset(x, a, sizeof(x))
#define vll vector < long long int >
#define sll set < long long int >
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
	fastIO;
	ll t,n,i,j,k,a[100001],b[100001]={0},c[100001]={0},s,p=1,totsum=0;
	ll netsum=0;
	cin>>n>>s;
	fo(i,n)cin>>a[i];
	ll st=0,ed=n,ans=0,ansc=0;
	while(st<=ed)
	{
		ll sss=0;
		k = st + (ed-st)/2;
		vector < ll > vt;
		fo(i,n)vt.pb(a[i]+(i+1)*k);
		sort(vt.begin(),vt.end());
		for(i=0;i<k;i++)sss+=vt[i];
		if(sss<=s)
		{
			st = k+1;
			ans=k;
			ansc=sss;
		}
		else
		{
			ed = k-1;
		}
	}
	cout<<ans<<" "<<ansc;
}