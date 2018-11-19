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
	ll t=1,n,m,i,j,k,sum=0,ans=0;
	string s,p,q;
	cin>>s>>n;
	string a[n];
	rep(i,0,n)
	cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]==s)
		{
			cout<<"YES";
			return 0;
		}
	}
	for(i=0;i<n;i++){
		if(a[i][1]==s[0]){
			for(j=0;j<n;j++){
				if(a[j][0]==s[1]){
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}