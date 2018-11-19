#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

string ss;
string s[101];
int n;

int main() {
	cin >> ss;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> s[i];
		if (s[i] == ss) {
			cout << "YES" << endl;
			return 0;
		}
	}
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < n; j ++) {
			if (ss[0] == s[i][1] && ss[1] == s[j][0]) {
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
