#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define sec second
#define fori(i, a, b) for(int i = int(a); i < int(b); i++)

typedef long long ll;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int main(){
    ios_base::sync_with_stdio(false);

	int n, t; cin >> n >> t;
	string s; cin >> s;

	while (t--) {
		fori(i,0,s.length()-1) {
			if (s[i] == 'B' && s[i+1] == 'G') {
				s[i] = 'G';
				s[i+1] = 'B';
				i++;
			}
		}
	}

	cout << s << endl;

	return 0;
}

