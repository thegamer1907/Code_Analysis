#include<bits/stdc++.h>
using namespace std;

const int PRECISION = 10;

int main() {
	#define endl '\n'
	int n;
	cin>>n;
	string s;
	cin>>s;
	int tot = 0;
	char be = '\n';
	for(int i = 0;i < s.size();i++) {
		if(be == s[i]) tot++;
		be = s[i];
	}
	cout<<tot<<endl;
}
