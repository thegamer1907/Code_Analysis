#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (a); i < (int) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define forall(it, v) for(auto it = v.begin(); it != v.end(); ++it)
#define dforn(i, n) for(int i = ((int) n) - 1; i >= 0; i--)
#define db(v) cerr << #v << " = " << v << endl
#define pb push_back
#define sz(x) ((int)x.size())
#define ff first
#define ss second
typedef long long ll;
const int MAXN = -1;

int n, m;
string X;
set<string> P, E, T;

int main(){
//	freopen("input.txt", "r", stdin);
	while(scanf("%d %d", &n, &m) == 2){
        P.clear(); E.clear(); T.clear();
//        db(n); db(m);
        forn(i, n){ cin >> X; P.insert(X); }
        forn(i, m){
            cin >> X;
            if(P.lower_bound(X) != P.end() && X == *P.lower_bound(X)){P.erase(X); T.insert(X);}
            else E.insert(X);
        }
        int p = P.size(), e = E.size(), t = T.size();
        p += (t+1)/2; e += t/2;
        cout << (p > e ? "YES" : "NO") << endl;
    }
	return 0;
}
