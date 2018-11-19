
#include <bits/stdc++.h>
using namespace std;
#define sqr(x) ((x)*(x))
#define rep(i,n) for(int i=0; i<n; i++)

#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define MP make_pair
#define PB push_back

typedef map<int, int> MII;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;
const int M = 1e9 + 7;
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const ll LINF = 1e18;
// header

const int N = 5;
double a[3] ;
int t1, t2;

int main(){
    rep(i, 3) cin >> a[i];
    a[0] *= 5;
    if(a[1] > 0 || a[2] > 0) a[0] += 0.5;
    if(a[2] > 0) a[1] += 0.5;

 //   rep(i, 3) cout << a[i] << endl;
    scanf("%d%d", &t1, &t2);
    t1 *= 5;
    t2 *= 5;
    if(t1 > t2) swap(t1, t2);
    bool f1 = 0, f2 = 0;
    rep(i, 3){
        if(a[i] > t1 && a[i] < t2) f1 = 1;
        if(a[i] < t1 || a[i] > t2) f2 = 1;
    }
    if(f1 && f2) puts("NO");
    else puts("YES");
    return 0;
}
