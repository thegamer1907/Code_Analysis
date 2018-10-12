#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ,m,i;
	string s;
	set<string>p;
	set<string>e;
	cin>>n>>m;
	set<string>all;
	for(i=0;i<n;i++){
		cin>>s;
		p.insert(s);
		all.insert(s);
	}
	for(i=0;i<m;i++){
		cin>>s;
		e.insert(s);
		all.insert(s);
	}
	int x=p.size();
	int y=e.size();
	int k=all.size();
	if(x>y){
		cout<<"YES";
	}
	else if(x==y){
		if(k%2)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else
		cout<<"NO";
}