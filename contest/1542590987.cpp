#include "bits/stdc++.h"
using namespace std;

int main(){
	string s;
	int n;
	cin>>s;
	cin>>n;
	
	vector<string> m(n);
	
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	
	for(int i=0;i<n;i++){
		if(s==m[i]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[0]==m[i][1]&&s[1]==m[j][0]){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	
	cout<<"NO"<<endl;
	
	return 0;
}