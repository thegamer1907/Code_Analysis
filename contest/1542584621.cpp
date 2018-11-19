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
    double h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = (h*5);
    if(h >= 60) h -= 60;
    t1 = (t1*5);
    if(t1 >= 60) t1 -= 60;
    t2 = (t2*5);
    if(t2 >= 60) t2 -= 60;
    m += s/60;
    h += m/60;
    vector<double> arms(3);
    arms[0] = h;
    arms[1] = s;
    arms[2] = m;
    sort(arms.begin(), arms.end());
    rep(i,0,2){
        if(t1 > arms[i] && t1 < arms[i+1]){
            if(t2 > arms[i] && t2 < arms[i+1]){
                cout << "YES" << endl;
                return 0;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if(t1 > h && t1 > s && t1 > m){
        if(t2 > h && t2 > s && t2 > m){
            cout << "YES" << endl;
            return 0;
        }
        if(t2 < h && t2 < s && t2 < m){
            cout << "YES" << endl;
            return 0;
        }
    }
    if(t1 < h && t1 < s && t1 < m){
        if(t2 < h && t2 < s && t2 < m){
            cout << "YES" << endl;
            return 0;
        }
        if(t2 > h && t2 > s && t2 > m){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
