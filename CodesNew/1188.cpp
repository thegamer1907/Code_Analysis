#include<bits/stdc++.h>
using namespace std;
int arr[100100];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int t=0;
	for(int i=0;i<10000000;i++){
		if(i==n){
			i=0;
		}
		if(arr[i]<=t){
			cout<<i+1;
			return 0;
		}
		t++;
	}
	return 0;
}