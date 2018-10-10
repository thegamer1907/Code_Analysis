//QWsin
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define rep(i,x,y) for(int i=x;i<=y;++i)
using namespace std;

typedef long long ll;

ll n;
inline bool check(ll k)
{
	ll t=n,sum=0;
	while(t)	
	{
		if(t>=k) {t-=k;sum+=k;}	
		else {sum+=t;break;}
		
		t-= t/10;
	}
	
	return sum*2>=n;
}

int main()
{
	
	cin>>n;
	
	ll l=1,r=n,ans,mid;
	while(l<=r)
	{	
		mid=(l+r)>>1;
		if(check(mid)) ans=mid,r=mid-1;
		else l=mid+1;
	}
	
//	if(ans==39259424579862582) cout<<39259424579862572<<endl;
	//else 
	cout<<ans<<endl;
	return 0;
}
