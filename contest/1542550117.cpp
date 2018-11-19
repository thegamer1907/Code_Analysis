#include<iostream>

using namespace std;

int main(){
	int i,j;
	string password;
	cin>>password;
	int x;
	cin>>x;
	
	string s[x];
	for(i=0;i<x;i++){
		cin>>s[i];
		
	}
	for(i=0;i<x;i++){
		if(s[i]==password){
			
			cout<<"YES";
			
			return 0;
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(/*(s[i].at(0)==password.at(0) && s[j].at(1)==password.at(1))  || */  (s[i].at(1)==password.at(0) && s[j].at(0)==password.at(1))  ){
				cout<<"YES";
				x=-1;
				break;
			}
		}
		if(x==-1){
			break;
		}
	}
	if(x!=-1){
		cout<<"NO";
	}
	return 0;
}
