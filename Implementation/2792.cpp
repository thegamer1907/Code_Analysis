#include<bits/stdc++.h>
using namespace std;

const int PRECISION = 10;

int main() {
	#define endl '\n'
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0), cout.setf(ios::fixed), cout.setf(ios::showpoint), cout.precision(PRECISION);
	string s;
	cin>>s;
	int lo = 0;
	int len = s.size();
	for(int i = 0;i < len;i++) {
		if(s[i] >= 'a' && s[i] <= 'z') lo++;
	}
	int hi = len - lo;
	if(hi > lo) {
		for(int i = 0;i < len;i++) {
			cout<<(char)toupper(s[i]);
		}
	}
	else {
		for(int i = 0;i < len;i++) {
			cout<<(char)tolower(s[i]);
		}
	}
}
