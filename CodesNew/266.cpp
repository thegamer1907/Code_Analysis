#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int M=100001;
int n,t,a[M];
int main() {
	
	cin>>n>>t;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int l=0,r=0,ans=0,sum=a[0];
	
	while (l<n && r<n)
	{
		if(l>r)
		{
			r++;
			sum+=a[r];
			continue;
		}
		
		
		if(sum>t)
		{
			sum-=a[l];
			l++;
		}
		
		else
		{
			ans=max(ans,r-l+1);
			r++;
			if(r!=n)
				sum+=a[r];
		}
	}
	cout<<ans;
	return 0;
}