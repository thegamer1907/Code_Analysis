#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int i,arr[n];
	for(i=0;i<n;i++) cin>>arr[i];
	
	int mx = 0;
	for(i=0;i<n;i++) mx = max(mx, arr[i]);
	
	int MX = m + mx;
	
	for(i=0;i<n;i++){
		int diff = mx-arr[i];
		if(diff < m){
			m-=diff;
			arr[i]+=diff;
		}
		else{
			arr[i]+=m;
			m=0;
			break;
		}
	}
	
	int MN = mx;
	if(m>0){
		MN += (m/n);
		if(m%n>0) MN++;
	}
	
	cout<<MN<<" "<<MX;	
	return 0;
}