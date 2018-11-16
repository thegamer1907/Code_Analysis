#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0;i<t;i++)
	{
		vector<int> store;
		for(int j=1;j<n;j++)
		{
			if(s[j-1]=='B' && s[j]=='G')
			store.push_back(j);
		}
		while(!store.empty())
		{
			int x=store[store.size()-1];
			store.pop_back();
			s[x]='B';
			s[x-1]='G';
		}
	}
	cout<<s<<endl;
	return 0;
}