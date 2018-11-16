#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
	ll n,i,sum_current=0,sum_global=0,count=0;
	cin>>n;
	vector<ll>arr(n,0);
	for(i=0;i<n;i++)cin>>arr[i];
	for(i=0;i<n;i++){
		if(arr[i]==1)count++;
	}
	if(count==n){
		cout<<n-1<<endl;
		return;
	}
	for(i=0;i<n;i++){
		if(arr[i]==1)
		arr[i]=-1;
		else
		arr[i]=1;
	}
	sum_current=sum_global=0;
	for(i=0;i<n;i++){
		sum_current=max(arr[i],sum_current+arr[i]);
		if(sum_current>sum_global)
		sum_global=sum_current;
	}
	cout<<sum_global+count<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}