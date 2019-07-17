#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e5+100;
ll n,m,k;
ll p[M];
int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=0;i<m;i++){
		scanf("%lld",&p[i]);
	}
	int cnt=0;
	int c=0;
	ll y=1;
	for(int i=0;i<m;){
		int j=i;
		for(;j<m;j++){
			if(p[j]>k*y+c) break;
		}
		c=j;
		if(j!=i)cnt++;
		if(p[j]>k*y+c) y=(p[j]-c+k-1)/k;
		i=j;
	}
	printf("%d\n",cnt);
	return 0;
}