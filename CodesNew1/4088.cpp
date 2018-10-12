#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
#define pb push_back
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector< pi >
const int N=200010;
ll a[N],b[N],sum[N];
int search(int i,int j,ll x)
{
	int ind=i-1;
	while(i<j)
	{
		int m=(i+j)/2;
		if(sum[m]-sum[ind]<x) i=m+1;
		else
			j=m;
	}
	return j;
}
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum[i]=sum[i-1]+a[i];
	}
	int i=1;
	ll k;
	while(q--)
	{
		cin>>k;
		if(a[i]!=b[i])
		{
			if(k<a[i])
			{
				a[i]-=k;
				cout<<n-i+1<<"\n";
				continue;
			}
			else if(a[i]==k)
			{
				a[i]=b[i];
				i++;
				if(i>n) i=1;
				cout<<n-i+1<<"\n";
				continue;
			}
			else
			{
				k-=a[i];
				a[i]=b[i];
				i++;
				if(i>n)
				{
					i=1;
					cout<<n<<"\n";
					continue;
				}
			}
		}
		if(sum[n]-sum[i-1]<=k)
		{
			cout<<n<<"\n";
			i=1;
			continue;
		}
		int j=search(i,n,k);
			//cout<<j<<"wtf\n";
			if(sum[j]-sum[i-1]==k)
			{
				cout<<n-j<<"\n";
				i=j+1;
			}
			else
			{
				a[j]-=(k-(sum[j-1]-sum[i-1]));
				cout<<n-j+1<<"\n";
				i=j;
			}
	}
	return 0;
}