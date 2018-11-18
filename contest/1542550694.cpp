#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <time.h>
#include <queue>
#include <stack>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <bitset>
#define PI acos(-1.0)
#define INF 2e9
#define llINF 4e18
#define EPS 1e-9
#define sz(v)        static_cast<int>((v).size())
#define pb(...)      push_back(__VA_ARGS__)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
inline int toInt(string s){int v; istringstream sin(s);sin>>v;return v;}
inline ll toll(string s){ll v; istringstream sin(s);sin>>v;return v;}
inline void fio(){ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str();}
#define rep(i, v) for( int i = 0; i < v; ++i)
#define MAX (100000 + 5)
#define MOD (1000000000 + 7)
#define LSOne(S) (S & (-S))




int main() {
    fio();
    string pass;
    cin >> pass;
    set<string> ss;
    int N;
    cin >> N;
    vector<string> v;
    for(int i = 0 ; i < N ; i++) {
        string s;
        cin >> s;
        v.push_back(s);
        ss.insert(s);
    }
    for(int i = 0 ; i < N ; i++) {
        for(int j = 0 ; j < N ; j++) {
            ss.insert(toString(v[i][1]) + toString(v[j][0]));
            ss.insert(toString(v[j][1]) + toString(v[i][0]) );
        }
    }
    if(ss.count(pass)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
