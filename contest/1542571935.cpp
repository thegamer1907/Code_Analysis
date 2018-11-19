#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FAST_IO  ios_base::sync_with_stdio(false)
#define EPS 1e-8

string password;
int n;

int main() {
    FAST_IO;
    cin >> password;
    cin >> n;
    string s[n+5];;
    for(int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if ((s[i]+s[j]).find(password) != -1) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
	return 0;
}
