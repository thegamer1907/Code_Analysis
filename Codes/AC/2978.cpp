#include <bits/stdc++.h>
using namespace std;

const int LEN = 1000010;

string s;
int p[LEN];

void runKMP() {
	int len;
	len = s.length();
	p[0] = 0;
	for(int i=1; i<len; ++i) {
		int temp = p[i-1];
		while(temp != 0) {
			if(s[i] == s[temp]) {
				p[i] = temp + 1;
				break;
			}
			temp = p[temp-1];
		}
		if(!temp) p[i] = (s[i] == s[0]);
	}
}

int freq[LEN];

int main() {
	int ans = 0;
	cin>>s;
	runKMP();
	for(int i=0; i<s.length(); ++i) {
		++freq[p[i]];
	}
	ans = p[s.length() - 1];
	if(freq[ans] < 2) ans = p[p[s.length()-1]-1];
	if(!ans) cout<<"Just a legend\n";
	else cout<<s.substr(0, ans);
	return 0;
}