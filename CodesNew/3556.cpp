#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	int m=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>m){
			m=a[i];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=m-a[i];
	}
	if(sum>=k){
		cout<<m<<" ";
	}
	else{
		int f=ceil((float)(k-sum)/(float)n);
		cout<<f+m<<" ";
	}
	cout<<m+k<<endl;
}