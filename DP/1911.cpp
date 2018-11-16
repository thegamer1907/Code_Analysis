#include <bits/stdc++.h>

#define sz(s) (ll)(s.size())
#define all(x) (x.begin(), x.end())

#define pb push_back
#define pf push_front
#define F first
#define S second
#define ort1 exit(0);
#define nl endl
#define db double

#define TL clock() / (double)CLOCKS_PER_SEC
#define NFS ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


const double pi = acos(-1.0);
const double eps = 1e-9;
const int mod = 1e9 + 7;
const ll INF = 1e12 + 1;
const int N = 1e5 + 9;

int n, m;
int a[N], b[N];
bool bl[N];
int san[N];

int main()
{
   // freopen("in.cpp", "r", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }

    san[0] = 0;
    reverse(a + 1, a + 1 + n);
    for(int i = 1; i <= n; ++i){
        if(bl[a[i]] == 0){
            bl[a[i]] = 1;
            san[i] = san[i - 1] + 1;
        }
        else san[i] = san[i - 1];
    }



    reverse(san + 1, san + 1 + n);
    for(int i = 1; i <= m; ++i){
        cin >> b[i];
        cout << san[b[i]] << endl;
    }

    return 0;
}

