#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define fori(i,j,k) for (int i=j;i<k;i++)
#define sum()
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
			newSet.insert(string{i[1],next[0]});
			newSet.insert(string{next[1],i[0]});
		}
	
		if(str[0]==next[1]&&str[1]==next[0]){
			cout<<"YES";
			return 0;
		}
		for (auto i : newSet)	mainSet.insert(i);
		mainSet.insert(next);
	}
	cout<<(mainSet.find(str)!=mainSet.end()?"YES":"NO");
	return 0;
}