#include "bits/stdc++.h"
using namespace std;
int main(){
	int n,t,i,l;
	cin>>n;
	cin>>t;
	string s;
	cin>>s;
	l=s.length();
	while(t--){
		for(i=0;i<l-1;i++){
			if(s[i]=='B'&&s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	cout<<s<<endl;
}