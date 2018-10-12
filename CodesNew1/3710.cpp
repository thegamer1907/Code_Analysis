#include<bits/stdc++.h>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	int i,j,k,n,m,arr[100],sum,min,max;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	sum=0;
	for(i=0;i<n;i++) sum+=arr[i];
	max=arr[n-1]+m;
	if(m<=((arr[n-1]*n)-sum)){
		min=arr[n-1];		
	}
	else{
		m-=((arr[n-1]*n)-sum);
		for(i=0;i<n-1;i++){
			arr[i]=arr[n-1];
		}
		min=arr[n-1];
		j=m/n;
		min+=j;
		if(m%n){
			min++;
		}
	}
	cout<<min<<" "<<max;
}
