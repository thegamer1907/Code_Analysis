#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD  1000000007 
#define lld long long
lld powm(lld base,lld exp,lld mod=MOD) {lld ans=1;while(exp){if(exp&1) ans=(ans*base)%mod;exp>>=1,base=(base*base)%mod;}return ans;}
int32_t main()
{
	sync
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int count=0;
	//two pointer
	int l,r;
	l=0;r=0;
	int sum=0;
	int count1=0;
	while(l<n)
	{
		while(r<n&&sum+a[r]<=t){
             sum+=a[r++];
			if(sum<=t)
				count1++;
		}
        if(count1>count)
        	count=count1;
		sum-=a[l++];
		count1--;
	}
	cout<<count<<endl;
}