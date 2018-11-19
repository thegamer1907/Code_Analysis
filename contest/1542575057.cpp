#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string s;cin>>s;
	int n,b=0;cin>>n;
	string s1[n];
	
	for(int i=0;i<n;i++){
		cin>>s1[i];
		if(s1[i]==s){
			b=1;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(s1[i][1]==s[0]&&s1[j][0]==s[1]){
			b=1;
		}
		
	}
	}
	
	if(b==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}