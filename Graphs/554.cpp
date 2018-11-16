#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	string s;
	cin>>n>>t;
	cin.ignore();
	cin>>s;
	while(t>0){
		int j=0;
		while(j<(n-1)){
			if(s[j]=='B' && s[j+1]=='G'){
				s[j]='G';
				s[j+1]='B';
				j=j+2;
			} else{
				j++;
			}
		} t--;
	}
	cout<<s;
}