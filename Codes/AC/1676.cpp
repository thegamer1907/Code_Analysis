#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>

using namespace std;

#define FTB(i,a,b) for(LL i=a;i<=b;i++)
#define FT(i,a,b) for(LL i=a;i<b;i++)
#define FGB(i,a,b) for(LL i=a;i>=b;i--)
#define FG(i,a,b) for(LL i=a;i>b;i--)
#define endl "\n"
#define PB push_back
#define mp make_pair
#define fi first
#define se second
#define debug cout<<"VL\n";
#define PI 3.1415926535897
#define lbnd(dau,cuoi,giatri) lower_bound(dau,cuoi,giatri)
#define ubnd(dau,cuoi,giatri) upper_bound(dau,cuoi,giatri)
typedef double DB;
typedef long long LL;
typedef unsigned long long UL;
typedef long double LD;
typedef pair<LL,LL> II;
typedef vector<LL> VI;
typedef vector<bool> VB;


LL n,m,k,res;

LL solve(LL x){
	LL sum=0;
	FTB(i,1,n){
		LL j=x/i;
		if(x%i==0) j--;
		sum+=min(m,j);
	}
	return sum;
}


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>m>>k;
	LL t=1,p=m*n;
	while(t<=p){
		LL mid=(t+p)/2;
		if(solve(mid)<k){
			res=mid;
			t=mid+1;
		}
		else p=mid-1;
	}
	cout<<res;
	return 0;
}


