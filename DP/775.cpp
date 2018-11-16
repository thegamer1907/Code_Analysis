#include<bits/stdc++.h>
#define for1(i,a,b) for(i=a;i<=b;i++)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define vt vector
#define ll long long
using namespace std;
int main(){
	ll i,j,a,n,res=0;
//	freopen("327A.inp","r",stdin);
//	freopen("327A.out","w",stdout);
	scanf("%lld ",&n);
	ll sum1[n+10],sum0[n+10];
	memset(sum1,0,sizeof(sum1));
	memset(sum0,0,sizeof(sum0));
	for1(i,1,n){
		scanf("%lld ",&a);
		sum1[i]=sum1[i-1];
		sum0[i]=sum0[i-1];
		if(a==1)sum1[i]++;
		else sum0[i]++;		
	}
	for1(i,1,n){
		for1(j,0,i-1){
			res=max(res,sum1[n]-(sum1[i]-sum1[j])+(sum0[i]-sum0[j]));
		}
	}
	printf("%lld",res);
}
