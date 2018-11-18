#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define For(i, a, b) for(int i=a; i<b; i++)
#define ffi For(i, 0, N)
#define ffj For(j, 0, M)
#define ffa ffi ffj
#define s <<" "<<
#define w cout
#define e "\n"
#define pb push_back
#define mp make_pair
#define a first
#define b second
#define int ll
const int MAXN=3000, INF=1000000000000000000;
///500,000,000
char a, b;
int N;
bool l1, l2;

main() {
    //ifstream cin("test.in");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> N;
    ffi {
        char c, d; cin >> c >> d;
        if (a == c && b == d) l1 = l2 = true;
        if (d == a) l1 = true;
        if (c == b) l2 = true;
    }
    if (l1 && l2) w<< "YES"<<e;
    else w<< "NO"<<e;
}
