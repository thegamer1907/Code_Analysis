#include <bits/stdc++.h>

#define pii pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define vec vector<int>

#define left not_right
#define y1 what

using namespace std;

const int N = (int) 4e4 + 10;
const int M = (int) 2e6 + 7;
const ll LINF = (ll) 1e18;
const int INF = (int) 1e6;
const double EPS = (double) 1e-9;

int n;
string s, st[N];
int cnt[50];

int main() {
    #define fn "balls"
    #ifdef witch
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
//        freopen(fn".in", "r", stdin);
//        freopen(fn".out", "w", stdout);
    #endif	
    srand(time(0));
    cin >> s >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> st[i];
    	if (st[i] == s) {
    		cout << "YES";
    		return 0;
    	}
    	cnt[st[i][0] - 'a']++;
    }
    for (int i = 1; i <= n; i++) {
    	if (st[i][1] == s[0] && cnt[s[1] - 'a']) {
    		cout << "YES";
    		return 0;
    	}
    }
    cout << "NO";
    return 0;
}

