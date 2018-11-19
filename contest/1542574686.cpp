#include <iostream>
#include<bits/stdc++.h>
#define lln long long int 

using namespace std;

int main() {
	lln n,k,i,j,f=0;
	vector<string> v;
	string s,s1,s3;
	cin>>s;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s1;
		v.push_back(s1);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		s3=v[i]+v[j];
		for(k=0;k<3;k++){
			if(s3[k]==s[0]&&s3[k+1]==s[1]){
				f=1;
				break;
			}
		}
		if(f!=1){
				s3=v[j]+v[i];
		for(k=0;k<3;k++){
			if(s3[k]==s[0]&&s3[k+1]==s[1]){
				f=1;
				break;
			}
		}
		}else if(f){
			break;
		}
		}
	}
	
	if(f){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}