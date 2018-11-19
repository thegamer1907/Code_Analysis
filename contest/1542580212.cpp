#include <bits/stdc++.h>
using namespace std;

string inp[100];

unordered_set<string> values;

int main(){
	string s;
	cin>>s;
	int m;
	cin>>m;
	for(int i = 0; i<m; i++){
		cin>>inp[i];
	}
	for(int i = 0; i<m; i++){
		for(int j = 0; j<m; j++){
			values.insert(inp[i]+inp[j]);
		}
	}
	for(int i = 0; i<26; i++){
		for(int j = 0; j<26; j++){
			char aa = 'a' + i;
			char bb = 'a' + j;
			string ii(1, aa);
			string jj(1, bb);
			string a = ii+s+jj;
			string b = ii+jj+s;
			if(values.find(a) != values.end()){
				cout<<"YES"<<endl;
				return 0;
			}
			if(values.find(b) != values.end()){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}