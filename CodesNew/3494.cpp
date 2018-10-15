#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long
#define mp make_pair
#define f first
#define s second
#define pii pair < int, int >
#define pll pair < ll, ll >
#define all(s) s.begin(), s.end()
#define sz(s) (int) s.size()
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define vi vector < int >

const int inf = (int)1e9;
const int mod = (int) 1e9 + 7;

int n, m, a[111];

int main () {
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i=0;i<n;i++) scanf("%d", &a[i]);

    int maxk = 0;
    int mink = a[0];

    for (int i=0;i<n;i++){
        maxk = max(maxk, a[i] + m);
    }

    sort(a, a + n);

    for (int i=0;i<n-1;i++){
        int t = min(m, a[n-1] - a[i]);
        a[i] += t;
        m -= t;
    }

    a[n-1] += m/n;
    if (m%n != 0) a[n-1]++;
    cout <<a[n-1]<<" "<<maxk<<endl;

    return 0;
}
