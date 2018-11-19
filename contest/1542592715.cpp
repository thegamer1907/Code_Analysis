#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string pass; cin >> pass; int n; cin >> n;
	bool first=false, last = false;
	for (int i = 1; i <= n; i++){
		string s; cin >> s;
		if (s == pass){
			cout << "YES"; exit(0);
		}
		else{
			if (s[1] == pass[0]){
				first = true;
			}
			if (s[0] == pass[1]){
				last = true;
			}
		}
	}
	if (first & last){
		cout << "YES";
	}
	else{ cout << "NO"; }
	return 0;
}
