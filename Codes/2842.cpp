#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6+5;
string s;
int len, pos[N];

int main() {
	cin >> s;
	len = s.size();
	string q = s.substr(1, len-2);
	
	int tmp;
	tmp = pos[0] = -1;
	for (int i = 0; i < len; i++) {
		while (tmp >= 0 && s[i] != s[tmp]) tmp = pos[tmp];
		pos[i+1] = ++tmp;
	}
	
	int ans = pos[s.size()];
	while (ans > 0) {
		int found = -1;
		for (int i = 0, j = 0; i < q.size(); i++, j++) {
		    while (j >= 0 && q[i] != s[j]) j = pos[j];
		    if (j+1 == ans) {
		        found = i-j;
		        break;
		    }
		}
		if (found != -1) break;
		ans = pos[ans];
	}
	
	if (ans > 0) cout << s.substr(0, ans) << endl;
	else printf("Just a legend\n");
	
	return 0;
}
