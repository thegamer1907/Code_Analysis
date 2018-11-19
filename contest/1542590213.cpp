#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int n;

int main() {
	string paw;
	cin >> paw;
	cin >> n;
	bool first = false;
	bool end = false;
	bool exist = false;
	for(int i = 0; i < n; i++) {
		string t;
		cin >> t;
		if(t == paw) exist = true;
		if(t[1] == paw[0]) first = true;
		if(t[0] == paw[1]) end = true;
		if(first && end) exist = true;
	}
	if(exist) printf("YES");
	else printf("NO");

	return 0;
}

