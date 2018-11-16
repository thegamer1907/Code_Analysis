#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < int(n); i++)
#define fori(i,sar,tah) for (int (i)=(sar);(i)<(tah);++(i))
#define SQRT 107
#define MAXN 1000000007
#define INF 0x7FFFFFFF + 7
#define ERR (1e-7)
#define equals(a,b) (fabs((a)-(b))<ERR)
#define pi pair<int,int>
#define pii pair<ll,ll>
#define x first
#define y second
const ll MOD = 1e9 + 7;
const int SIZE = 1003;
bool b1,b2;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    b1 = b2  = 0;
    rep(i,s.size()-1) {
        if(b1&&b2)
            break;
        if(s[i]=='A' && s[i+1]=='B' && !b1) {
            i++;
            b1 = 1;
            continue;
        }
        if(s[i]=='B' && s[i+1]=='A' && !b2 && b1) {
            i++;
            b2 = 1;
            continue;
        }
    }
    if(b1&&b2) {
        cout<<"YES";
        return 0;
    }
    b1 = b2 = 0;
    rep(i,s.size()-1) {
        if(b1&&b2)
            break;
        if(s[i]=='B' && s[i+1]=='A' && !b1) {
            i++;
            b1 = 1;
            continue;
        }
        if(s[i]=='A' && s[i+1]=='B' && !b2 && b1) {
            i++;
            b2 = 1;
            continue;
        }
    }
    if(b1&&b2) {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}


