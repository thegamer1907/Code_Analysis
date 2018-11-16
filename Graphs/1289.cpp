#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin>>n>>t;
	
	int a, i, cs=0;
	for(i=0;i<n-1;i++){
		cin>>a;
		if(cs==0 || i==cs){
			cs+=a;
		}
		if(cs==t-1){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	
	return 0;
}
