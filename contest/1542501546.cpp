#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n;
	string s1;
	cin >> s1;
	cin >>n;
	int fg1 = 0,fg2 =0,fg3 =0;
	string tp;
	for(int i=0;i<n;i++){
		cin >> tp;
		if(tp==s1){
			fg3 = 1;
		}
		if(tp[0]==s1[1]){
			fg1 = 1;
		}
		if(tp[1]==s1[0]){
			fg2 = 1;
		}
	}
	fg1*=fg2;
	if(fg1 || fg3){
		cout <<"YES"<<endl;
	}
	else{
		cout <<"NO"<<endl;
	}
}