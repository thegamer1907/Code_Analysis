#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

string s;
int n;
string d[105];
string cur;

int main () {

cin >> s;

cin >> n;

for (int i = 1; i <= n; i ++) {
	cin >> d[i];
	if (d[i] == s) {
		cout << "YES" << endl;
		return 0;
	}
}

for (int i = 1; i <= n; i ++) {
	for (int j = 1; j <= n; j ++) {
		if (d[i][0] == s[1] && d[j][1] == s[0]) {
			cout << "YES";
			return 0;
		}
		
	}
}

cout << "NO";
                             
return 0;
}