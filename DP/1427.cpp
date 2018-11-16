/// Author: mr.omti - Muhammadjon Hakimov

#include <bits/stdc++.h>

#define fi first
#define se second
#define LL long long
#define LD long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fin(s) freopen(s, "r", stdin);
#define fout(s) freopen(s, "w", stdout);

using namespace std;

int TN = 1;

void solve() {
    int n;
    cin >> n;
    int a[n], summ[n], ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i];
        if(i == 0) summ[i] = a[i];
        else summ[i] = summ[i - 1] + a[i];
    }
    int st = ans;
    ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int p;
            if(i == 0) p = 0;
            else p = summ[i - 1];
            ans = max(ans, st - (summ[j] - p) + j - i + 1 - (summ[j] - p));
        }
    }
    cout << ans;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	/// =========================================
	/// fin("input.txt"); fout("output.txt");
	/// fin("file.in"); fout("file.out");
	/// cin >> TN;
	/// =========================================
	while (TN--) solve();
	return 0;
}