#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ll long long
#define pii pair<int,int>
#define tii tuple <int,int,int>
#define N 100005
#define mod 2000003
#define X first
#define Y second
#define eps 0.0000000001
#define all(x) x.begin(),x.end()
#define tot(x) x+1,x+n+1
using namespace std;
int e[10], a[N][8], n, k, i, p[N], j, sc, ok;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
class crit {
        bool cmp(pii a, pii b) {
            int mx;
            mx = max(max(max(e[1], e[2]), e[3]), e[4]);
            int i;

            for(i = 1; i <= 4; i++)
                if(e[i] == mx)
                    break;

            if(a.X < b.X && b.Y == i)
                return 1;

            return 0;
        }
};
priority_queue<pii>sol;
vector<pii>v;
int mx, x, p2;
int main() {
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    cin >> n >> k;

    for(i = 1; i <= n; i++) {
        sc = 0;
        p2 = 1;

        for(j = 1; j <= k; j++) {
            cin >> a[i][j];

            if(a[i][j] == 1)
                sc += p2;

            p2 *= 2;
        }

        if(sc == 0) {
            cout << "YES\n";
            return 0;
        }

        ok = 0;

        for(j = 0; j < 16; j++)
            if(p[j] && (sc & j) == 0)
                ok = 1;

        p[sc] = 1;

        if(ok) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}

  		 		 	 	   					 		  	  		 	