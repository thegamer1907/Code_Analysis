#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m,common=0,x;
	cin>>n>>m;
	string s[n],ss[m];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<m;i++)
		cin>>ss[i];
	if(n>m){
		cout<<"YES";
	}
	else if(n<m){
		cout<<"NO";
	}
	else{
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(s[i]==ss[j]){
					common++;
				}
			}
		}
		if(common%2==0)
			cout<<"NO";
		else
			cout<<"YES";
		
	}
	return 0;
}