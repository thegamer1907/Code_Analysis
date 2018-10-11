#include <bits/stdc++.h>
using namespace std;
int m,n,sum;
string word;
set<string> overlapC;
int main(){
	cin>>n>>m;
	sum=n+m;
	for(int i=0;i<n;++i){
		cin>>word;
		overlapC.insert(word);
	}
	for(int i=0;i<m;++i){
		cin>>word;
		overlapC.insert(word);
	}
	
	if((sum-overlapC.size())%2!=0)++n;
	
	if(n>m){
		cout<<"YES";
		return 0;	
	}
	cout<<"NO";
}