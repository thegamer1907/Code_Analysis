#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

const int inf = 0x3c3c3c3c;
const ll infl = 0x3c3c3c3c3c3c3c3c;

string arr[109];

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	string password;
	cin >> password;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	bool is = false;
	for(int i = 0; i < n; i++){
		if(arr[i] == password) is = true;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][1] != password[0]) continue;
			if(arr[j][0] != password[1]) continue;
			is = true;
		}
	}
	printf("%s", is ? "YES" : "NO");
	return 0;
}