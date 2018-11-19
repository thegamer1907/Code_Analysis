#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef long long ll;

const int N = 500100;
const int oo = 1e9;

int n;

string a;
string b[200];

int main() {
	//freopen("input.txt", "r", stdin);
	cin >> a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> b[i];
		if(b[i]==a){
			puts("YES");
			return 0;
		}
	}
	for (int i = 0; i < n; ++i){
		for(int j = 0 ; j < n ; ++j){
			if(b[i][1]==a[0] && b[j][0] == a[1]){
				puts("YES");
				return 0;
			}

		}
	}
	puts("NO");
	return 0;
}