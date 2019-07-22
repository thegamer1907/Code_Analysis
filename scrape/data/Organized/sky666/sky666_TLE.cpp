#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL p[100005];
LL n,m,k;
LL cnt=0;
LL sv=0;
int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for(LL i=0;i<m;++i)scanf("%lld",&p[i]);
	LL lst=k;
	LL c=0;
	while(c<m){
		if(p[c]<=lst){
			++c;
			++sv;
		}else if(sv){
			lst+=sv;
			sv=0;
			++cnt;
		}else{
			lst+=k;
		}
	}
	if(sv)++cnt;
	cout<<cnt<<endl;
}