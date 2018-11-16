#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)


#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main() {
    int n; cin >> n;
    int arr[n]; int prefix[n];
    // Count number of 1's
    int cnt = 0;
    F0R(i, n){
        cin >> arr[i];
        if(arr[i] == 1){
            cnt ++;
        }
    }
    // Sets of prefix sums
    int cur = 0;
    prefix[0] = 0;
    F0R(i, n){
        int change = arr[i] == 1 ? -1 : 1;
        cur += change; prefix[i] = cur;
    }
    // First answer: starts at index 0
    int max_1 = -1;
    for(int i = 0; i < n; i++){
        max_1 = max(max_1, prefix[i]);
    }
    // Second answer: starts past 0
    for(int i = 1; i < n; i++){
        for(int j = i; j < n; j++){
            max_1 = max(max_1, prefix[j] - prefix[i - 1]);
        }
    }
    cout << max_1 + cnt;
    // 12:00 coding solution
}
