#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ar[n];
	int mx=0;
	int sum=0;
	for(int i=0; i<n; i++){
		cin>>ar[i];
	}
	for(int i=0; i<n; i++){
		mx=max(mx,ar[i]);
	}
	for(int i=0; i<n; i++){
		sum+=mx-ar[i];
	}
	cout<<sum;
}
