#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
	int a[n];
	int b[n];
	int c[n];
	int i=0;
	while(i!=n){
		cin>>a[i]>>b[i]>>c[i];
		if(i>0){
			a[i]+=a[i-1];
			b[i]+=b[i-1];
			c[i]+=c[i-1];
		}
		++i;
	}
	if(a[n-1]==0 && b[n-1]==0 && c[n-1]==0){
		cout<<"YES"<<'\n';
	}
	else{
		cout<<"NO"<<'\n';
	}
}