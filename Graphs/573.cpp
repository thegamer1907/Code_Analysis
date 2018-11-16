#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	string snew;
	snew=s;
	for(int i=1;i<=t;i++){
		for(int j=0;j<n;j++){
			if(s[j]=='B'&&s[j+1]=='G'){
				snew[j]=s[j+1];
				snew[j+1]=s[j];
				
			}
			
		}
		s=snew;
	}
	cout<<s;	
}