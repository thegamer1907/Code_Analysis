#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, b;
    cin >> n >> b;
    vi V(n);

    for (int i = 0; i < n; ++i) cin >> V[i];
    vi aux;
    int odd = 0, even = 0;
    for (int i = 0; i < n-1; ++i) {
        odd += V[i]%2;
        even += V[i]%2 == 0;
        if (odd == even) {
            aux.push_back(abs(V[i+1]-V[i]));
        }
    }
    sort(aux.begin(), aux.end());
    int cur = 0, ans = 0;
    for (int i = 0; i < aux.size(); ++i) {
        cur += aux[i];
        if (cur <= b) ans++;
    }
    cout << ans << "\n";
    return 0;
}