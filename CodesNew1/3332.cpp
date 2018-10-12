#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define N 100005
#define ll long long 
#define ld long double
#define pb push_back
#define ff first
#define ss second

int n, m;
int a[N];

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans2 = *max_element(a, a + n) + m;
    for (int it = 0; it < m; it++) {
        int pos = -1;
        for (int i = 0; i < n; i++) {
            if (pos == -1 || a[i] < a[pos]) {
                pos = i;
            }
        }
        assert(pos != -1);
        a[pos]++;
    }
    int ans1 = *max_element(a, a + n);
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}