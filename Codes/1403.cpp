#include<bits/stdc++.h>
using namespace std;
long long a[100002],n,S;
vector<long long>v;
long long check(long long k,long long type){
	if(k>n){
		return 0;
	}
	v.clear();
	long long ans=0;
	for(long long i=1;i<=n;i++){
		v.push_back(a[i]+k*i);
	}
	sort(v.begin(),v.end());
	for(long long i=0;i<k;i++){
		if(ans<=1e9+1e5){
			ans+=v[i];
		}
	}
	if(type==0){
		return ans<=S;
	}
	else{
		return ans;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>S;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	long long l=0,r=n,cnt=0;
	while(l<=r){
		if(l+1>=r){
			if(check(l,0)&&(!check(l+1,0))){
				cout<<l<<" "<<check(l,1);
				break;
			}
			else{
				cout<<r<<" "<<check(r,1);
				break;
			}
		}
		
		long long mid=(l+r)/2;
		if(check(mid,0)){
			if(check(mid+1,0)){
				l=mid;
			}
			else{
				cout<<mid<<" "<<check(mid,1);
				break;
			}
		}
		else{
			r=mid;
		}
	}
}