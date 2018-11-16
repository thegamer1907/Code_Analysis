#include<bits/stdc++.h>
#define hell 1000000007LL
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mk make_pair
#define fi                  first
#define se                  second
#define pii                 pair<int,int>
#define all(c)              c.begin(),c.end()
#define sz(c)               (int)c.size()
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
long long a[150004];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	long long sum=0;
	long long max_sum;
	int ind=1;
	for(int i=0;i<k;i++)
		sum+=a[i];
	max_sum=sum;
	//cout<<sum<<endl;
	for(int i=k;i<n;i++)
	{
		sum+=a[i]-a[i-k];
		//cout<<sum<<endl;
		if(max_sum>sum)
		{
			max_sum=sum;
			ind=i-k+2;
		}
	}
	cout<<ind;
	return 0;
}