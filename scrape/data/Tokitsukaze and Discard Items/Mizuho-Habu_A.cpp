#include<stdio.h>
#include<map>
using namespace std;
#define ll long long
map<ll,ll> index;
int main() {
	long long n,k;
	int m;
	scanf("%I64d%d%I64d",&n,&m,&k);
	while(m--){
		ll a1;
		scanf("%I64d",&a1);
		index[a1]=a1;
	}
	map<ll,ll>::iterator iter=index.begin();
	int cnt=0;int pc=0;
	while(iter!=index.end()){
		ll temp=(iter->second-1-pc)/k;
		int cnt1=1;
		while(1){
			iter++;
			if((iter->second-1-pc)/k!=temp)break;
			cnt1++;
		}
		pc+=cnt1;
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}