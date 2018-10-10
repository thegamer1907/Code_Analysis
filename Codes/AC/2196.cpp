#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair <int, int> ii;

#define ff first
#define ss second
#define pb push_back

const int N = 200050;

int n, a[N];
long long suf[N];
map <long long, int> m;

int main (void) {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
        
    for (int i = n; i >= 1; --i) {
        suf[i] = suf[i+1] + a[i];
        m[suf[i]] = i;
    }
        
    long long mx = 0, sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += a[i];
        if (m[sum] != 0 && m[sum] > i) {
            mx = max(mx, sum);
        }
    }
    
    cout << mx << "\n";
}