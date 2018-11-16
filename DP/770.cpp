#include<bits/stdc++.h>
#define for1(i,a,b) for(i=a;i<=b;i++)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define vt vector
#define ll long long
using namespace std;
int main(){
	ll n,i,a,res=0,mini=0,res1=0;
//	freopen("327A.inp","r",stdin);
//	freopen("327A.out","w",stdout);
	cin>>n;
	ll sumx[n+10];
	memset(sumx,0,sizeof(sumx));
	for1(i,1,n){
		cin>>a;
		if(a==1) res1++;
		if(a==1){
			sumx[i]=sumx[i-1]-1;
		}else{
			sumx[i]=sumx[i-1]+1;
		}
		res=max(res,sumx[i]-mini);
		mini=min(mini,sumx[i]);
	}
	res+=res1;
	if(res1==n) cout<<res1-1;
	else cout<<res;
}
