#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define MAX 200005
#define MOD 1000000007
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define mp map<ll,ll>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{ 
	fast 
	ll n,i,a[500005];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll m=n-1;
	for(i=n/2-1;i>=0;i--)
	{
		if(a[i]*2<=a[m])
		{
			m--;
		}
	}
	cout<<m+1;
	

}
	