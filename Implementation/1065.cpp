#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t,i;
	string inp;
	vector<int> posB;
	cin>>n>>t;
	cin>>inp;
	for(i=0;i<inp.size();i++){
		if(inp[i]=='B'){
			posB.push_back(i);
		}
	}
	while(t--){
		for(i=0;i<posB.size();i++){
			if(posB[i]+1<n){
				if(inp[posB[i]+1]=='G'){
					inp[posB[i]+1] = 'B';
					inp[posB[i]] = 'G';
					posB[i]++;
				}
			}
		}
	}
	cout<<inp;
	return 0;
}