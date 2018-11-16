#include <bits/stdc++.h>
#define ll long long
#define x1 asdasdsaas
#define y1 cdaca1231
#define fi first
#define se second
using namespace std;
const int MAXN = 1e6;
int n,cnt0[MAXN],cnt1[MAXN],a[MAXN];
int count0(int l, int r){
	return cnt0[r]-cnt0[l-1];
}
int count1(int l, int r){
	return cnt1[r]-cnt1[l-1];
}
int main(){
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	cin>>n;
	int res = 0;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]==0){ 
			cnt0[i]=cnt0[i-1]+1;
			cnt1[i]=cnt1[i-1];
		} else {
			cnt1[i]=cnt1[i-1]+1;
			cnt0[i]=cnt0[i-1];
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++)
			res=max(res,count1(1,i-1)+count0(i,j)+count1(j+1,n));
	}
	cout<<res;
}