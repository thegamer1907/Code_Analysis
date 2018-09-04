#include<bits/stdc++.h>
#define int long long int
//#define endl '\n'
using namespace std;
int a[100007];
main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		a[i]++;
		int t=i%n;
		a[i]+=(t-a[i]%n+n)%n;
	}
	int mn=2147483647,k;
	for(int i=1;i<=n;i++){
		if(a[i]<mn){
			mn=a[i];
			k=i;
		}
	}
	cout<<k<<endl;
}
