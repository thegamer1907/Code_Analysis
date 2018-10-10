#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int n,S;
	scanf("%d%d",&n,&S);
	vector<int> a(n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int lo=0,hi=n;
	while(lo<hi){
		int mid=lo+hi+1>>1;
		ll c=0;
		vector<ll> v;
		for(int i=0;i<n;i++){
			v.push_back(a[i]+1ll*(i+1)*mid);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<mid;i++){
			c+=v[i];
		}
		if(c<=S) lo=mid;
		else hi=mid-1;
	}
	int k=lo;
	ll T=0;
	vector<int> v;
	for(int i=0;i<n;i++){
		v.push_back(a[i]+1ll*(i+1)*k);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++){
		T+=v[i];
	}
	cout<<k<<' '<<T<<endl;
	return 0;
}