#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
typedef vector<int> VI;
typedef pair<LL,LL> PLL;
typedef pair<int,int> PII;
typedef pair<PII,PII> PPII;
#define B_E(x) x.begin(),x.end()
#define PB push_back
#define MP make_pair
#define S second
#define F first
inline void file()
{
#ifdef _WIN32
    return;
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    if (0) {
        freopen(".in",  "r", stdin);
        freopen(".out", "w", stdout);
    }
}

const clock_t MAXT = (100*CLOCKS_PER_SEC)/1000;
const int   PX[8] = {0,1,0,-1,1,1,-1,-1},
            PY[8] = {1,0,-1,0,1,-1,-1,1},
            N = 1e5 + 10,
            INF = 1e9,
            MOD = 1e9+7;
const LL    INFL = 1e18;
const LD    EPS = 1e-6;



char x,y;
int n;
string a[200];



int main()
{ file();

    cin>>x>>y;
    cin>>n;
    for (int i=0; i<n; ++i)  {
        cin>>a[i];
        for (int j=1; j<a[i].size(); ++j)
            if ( a[i][j-1] == x && a[i][j] == y ) {
                cout<<"YES\n";
                return 0;
            }
    }


    for  (int i=0; i<n; ++i)
    for (int j=0; j<n; ++j)
    if ( a[i].back() == x&& a[j].front() == y ) {
        cout<<"YES\n";
        return 0;
    }


    cout<<"NO\n";























}




















