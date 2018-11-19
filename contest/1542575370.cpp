#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
const int N = 1e5 + 5;
int n, k, a[N][5];
vector < pair < pair < int , int > , int > > b;
bool us[2][2][2];

bool us2[2][2][2][2];
vector < pair < pair < int , int > , pair < int , int > > > c;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >>n>>k;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= k; ++j){
            cin >>a[i][j];
        }
    }
    if (k == 1){
        for (int i = 1; i <= n; ++i){
            if (a[i][1] == 0)return cout <<"YES", 0;
        }
        cout <<"NO";
        return 0;
    }
    if (k == 2){
            bool o1 = 0, o2 = 0;
        for (int i = 1; i <= n; ++i){
            if (a[i][1] == 0)o1 = 1;
            if (a[i][2] == 0)o2 = 1;
        }
            if (o1 == 1 && o2 == 1)return cout <<"YES",0;
            cout <<"NO";
    }
    if (k == 3){
        for (int i = 1; i <= n; ++i){
            if (us[a[i][1]][a[i][2]][a[i][3]])continue;
            us[a[i][1]][a[i][2]][a[i][3]] = 1;
            b.pb(mp(mp(a[i][1], a[i][2]), a[i][3]));
        }
        bool o = 0, x, y, z;
        for (int i = 0; i < b.size(); ++i){
            for (int j = 0; j < b.size(); ++j){
                if (b[i].fi.fi == 0 || b[j].fi.fi == 0)x = 1;else x = 0;
                if (b[i].fi.se == 0 || b[j].fi.se == 0)y = 1;else y = 0;
                if (b[i].se == 0 || b[j].se == 0)z = 1;else z = 0;
                if (x == 1 && y == 1 && z == 1)o = 1;
            }
        }
        if (o == 1)cout <<"YES";else cout <<"NO";
        return 0;
    }
    if (k == 4){
        for (int i = 1; i <= n; ++i){
            if (us2[a[i][1]][a[i][2]][a[i][3]][a[i][4]])continue;
            us2[a[i][1]][a[i][2]][a[i][3]][a[i][4]] = 1;
            c.pb(mp(mp(a[i][1], a[i][2]), mp(a[i][3], a[i][4])));
        }
        bool o = 0, x, y, z, q;
        for (int i = 0; i < c.size(); ++i){
            //cout <<c[i].fi.fi<<" "<<c[i].fi.se<<" "<<c[i].se.fi<<" "<<c[i].se.se<<endl;
            for (int j = 0; j < c.size(); ++j){
                if (c[i].fi.fi == 0 || c[j].fi.fi == 0)x = 1;else x = 0;
                if (c[i].fi.se == 0 || c[j].fi.se == 0)y = 1;else y = 0;
                if (c[i].se.fi == 0 || c[j].se.fi == 0)z = 1;else z = 0;
                if (c[i].se.se == 0 || c[j].se.se == 0)q = 1;else q = 0;
                if (x == 1 && y == 1 && z == 1 && q == 1)o = 1;
            }
        }
        if (o == 1)cout <<"YES";else cout <<"NO";
        return 0;
    }
}
/*


7 4
1 1 1 1
1 0 0 0
0 1 1 0
1 0 0 1
0 1 1 0
1 1 1 1
0 0 0 0


*/
