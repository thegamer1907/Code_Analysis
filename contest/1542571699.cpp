
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
#include <limits>
#include <iomanip>
#include <ctime>
#include <map>
#include <unordered_map>
#include <deque>
#include <queue>
#include <stack>

#define vr vector
#define vri vector<int>
#define dq deque
#define dqi deque<int>
#define pri pair<int,int>
#define ll long long
#define dbl double
#define ld long double
#define fin(s,n) for( int i = s; i < n; i++ )
#define fjn(s,n) for( int j = s; j < n; j++ )
#define sqr(x) x*x
#define sqrl(x) long long(x)*x
#define crma int n; cin >> n; vri a(n); fin(0,n) cin >> a[i];
#define rv(n) int n; cin >> n;
#define r2v(n,k) int n,k; cin >> n >> k;
#define r3v(n,m,k) int n,m,k; cin >> n >> m >> k;
#define r4v(n,m,k,l) int n,m,k,l; cin >> n >> m >> k >> l;

using namespace std;

int main() {

    char f,s; cin >> f >> s;
    rv(n);
    bool ef = false, es = false;
    fin(0,n) {
        string st; cin >> st;
        if( st[0] == f && st[1] == s ) {
            cout << "YES";
            return 0;
        }
        if( st[0] == s )
            es = true;
        if( st[1] == f )
            ef = true;
    }

    if( ef && es ) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}