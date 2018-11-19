#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
#define vi vector<int>
#define vii vector< vector<int> >
#define PI 3.1415926535897932384626433832795

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int n;
	cin >> s >> n;
	vector<bool> wasend(500);
	vector<bool> wasstart(500);
	for(int i = 0; i < n; i++) {
		string st;
		cin >> st;
		if(s.at(0) == st.at(0) && s.at(1) == st.at(1)) {
			cout << "YES";
			return 0;
		}
		wasend[st.at(1)] = true;
		wasstart[st.at(0)] = true;
	}
	if(wasend[s.at(0)] && wasstart[s.at(1)]) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
