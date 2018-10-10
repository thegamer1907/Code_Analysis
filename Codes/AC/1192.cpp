#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,mi,c=0;
	string s;
	map<string,bool> m;
	cin>>n>>mi;
	for(int i=0;i<n;i++){
		cin>>s;
		m[s]=true;
	}
	for(int i=0;i<mi;i++){
		cin>>s;
		if(m[s])
			c++;
	}
	if(c&1){
		if(n>=mi)
			cout<<"YES";
		else
			cout<<"NO";
	}else{
		if(n>mi)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}