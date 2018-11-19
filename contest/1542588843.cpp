#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string s[200];
bool f1, f2;
int main() {
	cin >> s[0];
	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> s[i];
	}
	bool flag = false;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			string t = s[i] + s[j];
			for(int k=0; k<3; k++) {
				if(t[k] == s[0][0] && t[k+1] == s[0][1])
					flag = true;
			}
		}
	}
	printf("%s\n", flag ? "YES" : "NO");
	return 0;
}