#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

string pass;

int main() {
	ios::sync_with_stdio(0);
	bool first = false, last = false;
	cin >> pass;
	int n;
	cin >> n;
	for(int i = 0; i<n; i++){
		string tmp;
		cin >> tmp;
		if(tmp==pass){
			first = last = true;
		}
		if (tmp[1] == pass[0])
			first = true;
		if (tmp[0] == pass[1])
			last = true;
	}
	if (first&&last)
		cout << "YES";
	else cout << "NO";
	return 0;
}
