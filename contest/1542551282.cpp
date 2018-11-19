#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define S second
#define F first

using namespace std;

const int MAXN = 1e5 + 7;
const ll INF = 1e9 + 7;

int n,k;
int a[MAXN][5];
vector<int>v[MAXN];
vector<int>cur;
vector< pair<int,int> >e;
map<string, int >mac;
vector <string>all;
string give[MAXN];
int idx = 0;

int main () {

    //freopen ("distance.in", "r", stdin);
    //freopen ("distance.out", "w", stdout);


    scanf ("%d%d",&n,&k);

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= k; j ++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                v[i].pb(j);
            }
            if (a[i][j] == 1)give[i - 1].pb('1');
            else give[i - 1].pb('0');
        }
        if (!mac[give[i - 1]]) {
            mac[give[i - 1]] = 1;
            all.pb(give[i - 1]);
            idx ++;
        }
    }


    for (int i = 1; i <= n; i ++) {
        bool any = true;
        if (v[i].size() == 1) {
            cur.pb(v[i][0]);
        }
        for (int j = 1; j <= k; j ++) {
            if (a[i][j] == 1)any = false;
        }
        if (any) {
            printf("YeS");
            return 0;
        }
    }

    sort (cur.begin(), cur.end());

    for (int i = 1; i < cur.size(); i ++) {
        if (cur[i] != cur[i - 1]) {
            printf ("YeS");
            return 0;
        }
    }

    for (int i = 0; i < idx; i ++) {
        for (int j = 0; j < idx; j ++) {
            if (i != j) {
            bool check = true;
            for (int o = 0; o < all[i].size(); o ++) {
                if (all[i][o] == '1' && all[j][o] == '1') {
                    check = false;
                    break;
                }
            }
            if (check) {
                printf ("YeS");
                return 0;
            }
            }
        }
    }

    printf ("NO");

    return 0;
}
