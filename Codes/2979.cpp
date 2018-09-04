#include <bits/stdc++.h>
using namespace std;

const int LEN = 1000010;

string s;
multiset<int> ss;
int z[LEN];

void computeZ() {
	int len, l, r;
	len = s.length();
	z[0] = len;
	l = r = -1;
	for(int i=1; i<len; ++i) {
		z[i]=0;
		if(r>i) {
			z[i]=min(z[i-l],r-i+1);
		}
		while(s[i+z[i]]==s[z[i]]) ++z[i];
		if(i+z[i]-1 > r) {
			r=i+z[i]-1;
			l=i;
		}
	}
}

int main() {
	int ans = 0;
	cin>>s;
	computeZ();
	for(int i=1; i<s.length(); ++i) {
		ss.insert(z[i]);
	}
	for(int i=s.length()-1; i>0; --i) {
		ss.erase(ss.find(z[i]));
		if(z[i] == s.length()-i && ss.lower_bound(z[i]) != ss.end()) {
			ans = max(ans, (int)s.length() - i);
		}
	}
	if(!ans) cout<<"Just a legend\n";
	else cout<<s.substr(0, ans);
	return 0;
}