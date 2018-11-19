#include <cstring>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
typedef long long ll;

char wd[3];
bool has[26][26];
string s[100];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> wd;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		has[s[i][0]-'a'][s[i][1]-'a'] = 1;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			has[s[i][1]-'a'][s[j][0]-'a'] = 1;
		}
	}
	if (has[wd[0]-'a'][wd[1]-'a'])
		cout << "YES\n";
	else cout << "NO\n";
	return 0;
}