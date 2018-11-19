#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i ,a, b) for (int i = a ; i <= b ; i++)
#define sz(a) int(a.size())
#define cuti(a) cout << a << endl;
#define cutii(a,b) cout << a << " " << b << endl;
#define cutiii(a,b,c) cout << a << " " << b << " " << c << endl;
#define vec(a) vector<int > a;

template<typename T,typename U> inline void chmin(T &x,U y){ if(y<x) x = y; }

typedef pair<int ,int > pii;
typedef long long LL;
const long long oo = 1e9 + 7;

int h,m,s;
int t1,t2;
int a[4];

int main() {
   // freopen("test.txt","r",stdin);
    cin >> h >> m >> s >> t1 >> t2;
    a[1] = 12 * 60 * s;
    a[2]= 12 * m * 60 + s;
    a[3] = h * 60 * 60 + m * 60 + s;

    sort(a+1,a+1+3);

    int tmpt1 = t1 * 60 * 60 ;
    int tmpt2 = t2 * 60 * 60 ;

   // cutiii(a[1] , a[2] , a[3]);

   // cutii(tmpt1 , tmpt2);
    if (  a[1] <= tmpt1 && tmpt1 <= a[2] && a[1] <= tmpt2 && tmpt2 <= a[2]) {
        cout << "YES";
        return 0;
    }
    if (  a[2] <= tmpt1 && tmpt1 <= a[3] && a[2] <= tmpt2 && tmpt2 <= a[3]) {
        cout << "YES";
        return 0;
    }
    if (  a[3] <= tmpt1 && a[3] <= tmpt2 || tmpt1 <= a[1] && tmpt2 <= a[1] || a[3] <= tmpt1 && tmpt2 <= a[1] || tmpt2 >= a[3] && tmpt1 <= a[1]) {
        cout << "YES";
        return 0;
    }
    cout << "NO" ;
}
