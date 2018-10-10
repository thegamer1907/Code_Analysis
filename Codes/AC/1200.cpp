#include<bits/stdc++.h> 
#define por(i,a,b) for(i=a;i<b;i++)
#define sf(R) scanf("%I64d",&R)
#define pf(R) printf("%I64d",R)
#define pb(x) push_back(x)
#define ld long double
#define mo 1000000007
#define ll long long
#define S second
#define f first
#define N 100000
using namespace std;
ll x,n,m,s2,i,j,k,s=0,t[N];
string ch;
map<string,ll>mp;
int main() {
	sf(n);sf(m);
	por(i,0,n){
		cin>>ch;
		mp[ch]++;
	}
	por(i,0,m){
		cin>>ch;
		mp[ch]++;
	}
	if(n>m)printf("YES");
	else if(n<m) printf("NO");
	else{
		for (auto x : mp) { s+=(x.second==2) ;}
		if(s%2==0) printf("NO");else printf("YES");
	}
	
	
	return 0;
}