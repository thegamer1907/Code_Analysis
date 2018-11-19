#include<bits/stdc++.h>
using namespace std;
const int MN = 111;

string s[MN];

void suc(){
	cout << "YES" << endl;
	exit(0);
}

void fail(){
	cout << "NO" << endl;
	exit(0);
}

int main(){
	string A;
	cin>>A;
	int n;cin>>n;
	for(int i=0;i<n;++i){
		cin >> s[i];
		if(s[i] == A) suc();
	}
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j){
			string tmp = s[i] + s[j];
			tmp = tmp.substr(1 , 2);
			if(tmp == A) suc();
		}
	fail();
	return 0;
}