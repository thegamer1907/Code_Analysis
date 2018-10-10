#include<iostream>
#include<string>
#include<map>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	map<string, int> mm;
	int rep = 0;
	string s;
	int ni = n, mi = m;
	while (ni--) {
		cin >> s;
		mm[s]++;
	}
	while (mi--) {
		cin >> s;
		if (mm[s]) rep++;
	}
	if (n > m) cout << "YES" << endl;
	else if (n < m) cout << "NO" << endl;
	else if (rep % 2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}