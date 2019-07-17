#include<bits/stdc++.h>
#define clr(a,b) memset(a,b,sizeof(a))
using namespace std;
typedef long long ll;
const int maxn=101;

vector<ll >a;
ll n,m,k;
int main() {
	while(cin>>n>>m>>k){
		ll x;
		a.clear();
		for(int i=0;i<m;i++){
			scanf("%lld",&x);
			a.push_back(x);
		}
		ll pa=k,ans=0,tep=0;
		for(int i=0;i<m;i++){
		//	printf("debug\n");
			if(a[i]<=pa){
				tep++;
				continue;
			};
			if(tep==0){
				pa+=((a[i]-pa-1)/k+1)*k;
				i--;
			}else{
				ans++;
				pa+=tep;
				tep=0;
				i--;
			}
			
		}
		if(tep){
			ans++;
		}
		printf("%lld\n",ans);
	}

}
/*
10000000000000 1 1
100000000000
*/