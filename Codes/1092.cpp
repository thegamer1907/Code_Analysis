#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long int ll;
int main(){
	ll n,d;
	cin>>n>>d;
	vector<ll> v;
	map<ll,ll> num,pre;
	for(int i=1;i<=n;++i){
		int m,s;
		cin>>m>>s;
		v.push_back(m);
		num[m]+=s;
	}
	for(auto &p:num){
		if(pre.empty()){
			pre.insert(p);
		}else{
			pre[p.first]=p.second+(--pre.end())->second;
		}
	}
	pre[-1e15]=0;
	ll mx=-1e15;
	for(auto it=++pre.begin();it!=pre.end();++it){
		auto it2=--it;
		++it;
		ll t=(--pre.upper_bound(it->first+d-1))->second-it2->second;
		mx=max(t,mx);
	}
	cout<<mx<<endl;
	return 0;;
}
	
