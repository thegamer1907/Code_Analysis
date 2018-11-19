#include <bits/stdc++.h>
#define fr first
#define sc scanf
#define pf printf
#define se second
#define ll long long
#define pb push_back
#define pr pair < ll, ll >
#define sq(n) n * n
#define fin(s) freopen( s, "r", stdin )
#define fout(s) freopen( s, "w", stdout )
#define TIME ios_base::sync_with_stdio(0)

using namespace std;

const ll N = 205 + 4, MAX = 4e5 + 1, INF = 2e18, mod = 1743;

int n;
string a;
string b[105];

main(){
    cin >> a;
    cin >> n;
    for( int i = 1; i <= n; i ++ ){
        cin >> b[i];
        if( b[i] == a || ( b[i][1] == a[0] && b[i][0] == a[1] ) ){ cout << "Yes"; return 0; }
        for( int j = i - 1; j > 0; j -- ){
            string c;
            c = "";
            c += b[i][1];
            c += b[j][0];
            if( c == a ){ cout << "Yes"; return 0; }
            c = "";
            c += b[j][1];
            c += b[i][0];
            if( c == a ){ cout << "Yes"; return 0; }
            //cout << c << '\n' << "------------\n";
        }
    }
    cout << "No";
}
