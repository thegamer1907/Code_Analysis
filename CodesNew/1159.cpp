#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvvi> vvvvi;

int n;
vi V;

bool pred(int mid) {
    int ind = mid%n;
    for (int i = 0; i < min(n, mid+1); ++i) {
        if (V[(ind-i+n)%n]-mid+i <= 0) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    V = vi(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    int low = 0, high = 1e9;
    while (low < high) {
        int mid = (low + high) / 2;
        if (pred(mid)) high = mid;
        else low = mid+1;
    }
    cout << (high%n) + 1 << "\n";
    return 0;
}