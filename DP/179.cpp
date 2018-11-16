#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[111],b[111],i,j,ans;
int main() {
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	cin>>m;
	for(i=1;i<=m;i++)
		cin>>b[i];
	sort(b+1,b+m+1);
	i=j=1;
	while(i<=n && j<=m)
	{
		if(abs(a[i]-b[j])<2)
			ans++,i++,j++;
		else
		{
			if(a[i]>b[j])
				j++;
			else
				i++;
		}
	}
	cout<<ans;
}
