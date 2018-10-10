#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
int a[N],b[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,t;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)b[i]=sum+1,sum+=a[i];
	cin>>m;
	while(m--)
	{
		cin>>t;
		cout<<upper_bound(b+1,b+n+1,t)-b-1<<endl;
	}
	return 0;
} 