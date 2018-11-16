#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
const ll MAXN = 100010;
int res,n,a[MAXN],cnt1[MAXN],cnt0[MAXN];
int count0(int l, int r){
	if (l>r) return 0;
	return cnt0[r]-cnt0[l-1];
}
int count1(int l, int r){
	if (l>r) return 0;
	return cnt1[r]-cnt1[l-1];
}
int main(){
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	cin>>n;
	a[0]=2;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		if (a[i]==1) cnt1[i]=cnt1[i-1]+1; else cnt1[i]=cnt1[i-1];
		if (a[i]==0) cnt0[i]=cnt0[i-1]+1; else cnt0[i]=cnt0[i-1];
	}
	// for (int i=1;i<=n;i++){ cout<<cnt1[i]<<" ";}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++) res=max(res,count0(i,j)+count1(1,i-1)+count1(j+1,n));
	}
	cout<<res;
}