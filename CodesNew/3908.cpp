#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
using namespace std;
#define MAXN 100005
#define LL long long
#define INF (1ll<<40)

LL n,a[MAXN],ans=INF;

bool ch(LL r){
	LL res=0;
	for(LL i=1;i<=n;i++){
		if(r<a[i])return 0;
		res+=r-a[i];
	}
	return res>=r;
}

int main(){
//	freopen("werewolf.in","r",stdin);
//	freopen("werewolf.out","w",stdout);
	scanf("%lld",&n);
	for(LL i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	LL l=0,r=INF,mid;
	while(l<r){
		mid=(l+r)/2;
		if(ch(mid)){
			ans=min(ans,mid);
			r=mid;
		}
		else{
			l=mid+1;
		}
	}
	cout<<ans;
	return 0;
}
