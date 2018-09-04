#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int p[1000010];

int main() {
	string s; cin >> s;
	memset(p, 0, sizeof(p));
	int size = s.size(), j = 0;
	for (int i = 2; i <= size; i ++) {
		while (j > 0 && s[j] != s[i-1]) j = p[j];
		if (s[j] == s[i-1]) j ++;
		p[i] = j;
	}
	
	int idx = size; 
	while (idx) {
		bool flag = false;
		for (int i = size-1; i > 0; i --) 
			if (p[i] >= p[idx] && p[idx] != 0) { flag = true; break; }
		if (flag) { cout << s.substr(0, p[idx]) << endl; return 0; }
		else idx = p[idx]; 
	}
	cout << "Just a legend\n";
	
	return 0;	
}