#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long n,m;
	cin>>n>>m;long long sum=0;
	long long arr[n];
	for(long long i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
		arr[i]=sum;
	}sum=0;
	while(m--){
		long long a;
		cin>>a;
		sum+=a;
		long long i=upper_bound(arr,arr+n,sum) - arr;
		if(i==n) i=sum=0;
		cout<<n-i<<endl;
	}
	return 0;
}
