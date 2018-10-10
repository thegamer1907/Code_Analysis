#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	#endif

	LL n,k;
	cin>>n>>k;

	map<LL,LL> lf,rt;
	LL arr[n];
	for(LL i=0;i<n;i++){
		cin>>arr[i];
		rt[arr[i]]++;
	}
	LL res=0;
	for(LL i=0;i<n;i++){
		LL k1=0,k2=0;
		if(arr[i]%k == 0){
			k1 = lf[arr[i]/k];
		}
		rt[arr[i]]--;
		k2 = rt[arr[i]*k];
		res += (k1*k2);
		lf[arr[i]]++;
	}
	cout<<res<<endl;
}