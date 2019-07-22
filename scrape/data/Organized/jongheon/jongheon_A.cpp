#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int Search(vector<ll> & num,ll & here,ll & tmp,ll & idx){
	if(idx>=num.size()||num[idx]>tmp)return 0;
	ll t=0;
	while(num[idx]<=tmp){
		idx++; t++;		
		if(idx>=num.size())break;
	}
	if(idx>=num.size()){return 1;}
	tmp+=t;
	return 1+Search(num,here,tmp,idx);
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll n,m,k; cin>>n>>m>>k;
	vector<ll> num(m);
	for(int i=0;i<m;i++){cin>>num[i];}
	ll here=1,idx=0,ans=0;
	while(here<=n){
		if(idx>=num.size())break;
		ll jump=(num[idx]-here)/k;
     		here+=(k*jump);
		ll tmp=here+k-1;
		ans+=Search(num,here,tmp,idx);
		here=tmp+1;
	}
	cout<<ans;
}