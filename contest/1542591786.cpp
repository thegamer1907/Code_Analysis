#include <bits/stdc++.h>
using namespace std;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31); // 2147483647

const double EPS = 1e-9;
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) { return (a % b + b) % b; }

int main(){
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    vector<string> v(n);
    string t;
    rep(i,0,n) {
        cin >> t;
        v[i] = t;
    }
    rep(i,0,n){
        if(v[i] == pass){
            cout << "YES" << endl;
            return 0;
        }
        if(v[i][1] == pass[0]){
            rep(j,0,n){
                if(v[j][0] == pass[1]){
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}
