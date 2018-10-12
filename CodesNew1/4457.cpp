#include <bits/stdc++.h>
#define ll long long int
#define pii pair <int,int>
#define ff first
#define ss second
#define pi acos(-1.0)
#define pb push_back
#define INF (ll)1e18
#define N 500002
#define MOD 1000000007
#define BASE 100003
const double EPS = 1e-9;
#define eq(a,b) (fabs(a-b)<EPS)

#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;

template < class T > inline T gcd(T a, T b) {while(b) {a %= b; swap(a, b);} return a;}
template < class T > inline T lcm(T a, T b) {return a/gcd(a, b)*b;}
inline int nxt() {int wow; scanf("%d", &wow); return wow;}
inline ll lxt() {ll wow; scanf("%lld", &wow); return wow;}
inline double dxt() {double wow; scanf("%lf", &wow); return wow;}

/***************** Fighters Launched *******************/

string s[N];
int nibo[N];

int main()
{
	//freopen("in.txt", "r", stdin);
    FastRead;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> s[i];
    nibo[n-1] = s[n-1].length();
    for (int i=n-2; i>=0; i--){
        int x = 0;
        nibo[i] = min(nibo[i+1], (int) s[i].length());
        while (x < s[i].length() and x < nibo[i+1]){
            if (s[i][x] == s[i+1][x]) x++;
            else{
                if (s[i][x] < s[i+1][x]) nibo[i] = s[i].length();
                else nibo[i] = x;
                break;
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<nibo[i]; j++) cout << s[i][j];
        cout << endl;
    }
    return 0;
}

