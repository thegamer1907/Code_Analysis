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
int H, T1, T2;
double M, S;
bool ha, ma, sa;

main() {
    //ifstream cin("test.in");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> H >> M >> S >> T1 >> T2;
    M /= 5;
    S /= 5;
    if (T2 < T1) swap(T1, T2);
    if (H >= T2 || H < T1) ha = true;
    if (M >= T2 || M < T1) ma = true;
    if (S >= T2 || S < T1) sa = true;
    //w<< ha s ma s sa<<e;
    if (ha == ma && ma == sa) w<< "YES"<<e;
    else w<< "NO"<<e;
}
