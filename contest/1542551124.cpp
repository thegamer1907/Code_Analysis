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
using namespace std;


int main() { 
	ll n,i,x,s=0;
	string a;cin>>a;
	sf(n);
	string t[n];
	por(i,0,n){
	cin>>t[i];
	if(t[i]==a){
		printf("YES");return 0;
	}}
	por(i,0,n){
		if(t[i][1]==a[0]){
			por(i,0,n){
				if(t[i][0]==a[1]){
					printf("YES");return 0;
				}
			}
		}
	}
	
	
	printf("NO");
	return 0;
}