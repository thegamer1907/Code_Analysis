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
// 4:01 thinking
int boys[101]; int girls[101];
int main() {
    // Sort boys and girls
    int a, b; cin >> a;
    F0R(i, a) cin >> boys[i];
    cin >> b;
    F0R(i, b) cin >> girls[i];
    sort(boys, boys + a);
    sort(girls, girls + b);
    // F0R(i, a) cout << boys[i] << " ";
    // cout << "\n";
    // F0R(i, b) cout << girls[i] << " ";
    
    // Go through boys and girls
    int bPointer = 0; int gPointer = 0;
    int cnt = 0;
    int curBoy = boys[bPointer]; int curGirl = girls[gPointer];
    while(bPointer < a && gPointer < b){
        // cout << "Current boy pointer: " << bPointer << "\n";
        // cout << "Current girl pointer:" << gPointer << "\n";
        if(abs(curBoy - curGirl) <= 1){
            cnt ++;
            bPointer ++; gPointer ++;
            curBoy = boys[bPointer]; curGirl = girls[gPointer];
        }
        else if(curBoy > curGirl){
            gPointer ++; curGirl = girls[gPointer];
        }
        else if(curGirl > curBoy){
            bPointer ++; curBoy = boys[bPointer];
        }
    }
    cout << cnt;
}
