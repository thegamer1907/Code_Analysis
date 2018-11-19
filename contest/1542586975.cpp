#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%lld",&n)
#define p(n) printf("%lld\n",n)
#define sf scanf
#define pf printf
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define hell 1000000007
#define rep(i,a,b) for(i=a;i<b;i++)

vll v;

int main()
{
	ll t=1,n,i,j,k,sum=0,ans=0;
	ll h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12){
		h=0;
	}
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	h=h*5;t1=t1*5;t2=t2*5;
	while(t1!=t2){
		if(h==t1)
			ans++;
		if(m==t1)
			ans++;
		if(s==t1)
			ans++;
		t1++;
		if(t1==60)
			t1=0;
	}
	if(ans==0 || ans==3)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}