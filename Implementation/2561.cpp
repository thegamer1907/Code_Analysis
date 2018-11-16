#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, f, width = 0;
	cin >> n >> h;
	
	width = n;
	for(int i = 0; i < n; i++) {
		cin >> f;
		if(f > h) width ++;
	}
	
	cout << width << endl;
	
	return 0;
}