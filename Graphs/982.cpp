#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	int a[n-1];
	for(int i=1;i<=n-1;i++){
		cin>>a[i];
	}
	int k=1,flag=0;
	while(k<=n){
		if(t==k){
			cout<<"YES";
			flag=1;
			break;
		}
		else{
			k+=a[k];
		}
	}
	if(flag==0){
		cout<<"NO";
	}
}
