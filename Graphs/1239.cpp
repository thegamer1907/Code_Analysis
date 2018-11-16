#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, t, i, p;
	cin>>n>>t;
	long long int a[n];
	for(i=1; i<n; i++){
		cin>>a[i];
	}
	p = 1;
	while(p < t){
		p = p + a[p];
	}
	if(p == t){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
