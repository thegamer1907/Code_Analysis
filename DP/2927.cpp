#include<bits/stdc++.h>
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define output(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define all(x) x.begin(),x.end()
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long
#define inf 10000000000;
#define ss(x) scanf("%lld",&x)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
	vi a(n);
	vi b(k);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<k;i++)
	{
		cin>>b[i];
	}
	if(k>1)
	{
		cout<<"Yes"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			a[i]=b[0];
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			cout<<"Yes"<<endl;
			return 0;
		}
		
	}
	cout<<"No"<<endl;
	return 0;
	


}

