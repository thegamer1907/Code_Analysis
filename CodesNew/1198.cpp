#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
#define F first
#define S second
#define sz(x) x.size()
#define mp make_pair

int main() {
	int n;
	cin>>n;
	ll arr[n];
	rep(i,0,n)cin>>arr[i];
	int ans=INT_MAX;
	int idx;
	rep(i,0,n)
	{
		arr[i]-=i;
		int tmp=0;
		if(arr[i]<=0)
		{
			tmp=0;
			if(tmp<ans)
		{
			ans=tmp;
			idx=i+1;
		}
		}

		if(arr[i]%n)
		tmp++;
		tmp+=(arr[i]/n);
		if(tmp<ans)
		{
			ans=tmp;
			idx=i+1;
		}
	}
	cout<<idx;
	return 0;
}
