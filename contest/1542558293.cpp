#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define fori(i,j,k) for (int i=j;i<k;i++)
using namespace std;

int main(){
	string str, next;
	cin>>str;
	int n;
	cin>>n;
	set<string> mainSet;
	set<string> newSet;
	fori(i,0,n){
		cin>>next;
		newSet.clear();
		string st = "ab";
		for (auto i : mainSet){	
			st[0]=i[1];
			st[1]=next[0];
			newSet.insert(st);
			st[0]=next[1];
			st[1]=i[0];
			newSet.insert(st);
		}
		st[0]=next[1];
		st[1]=next[0];
		if(st==str){
			cout<<"YES";
			return 0;
		}
		for (auto i : newSet)	mainSet.insert(i);
		mainSet.insert(next);
	}
	cout<<(mainSet.find(str)!=mainSet.end()?"YES":"NO");
	return 0;
}