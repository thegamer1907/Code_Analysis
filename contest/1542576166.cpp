#include <bits/stdc++.h>

#define fr first
#define sc second
#define OK puts("OK");
#define pb push_back
#define mk make_pair

using namespace std;

typedef long long ll;

const int inf = (int)1e9 + 7;
const int N = (int)1e5 + 7;

int n,k,mn;
int a[N][5];

int main () {
        cin >> n >> k;

        for (int i = 1; i <= n; i ++) {
                for (int j = 1; j <= k; j ++) {
                        cin >> a[i][j];
                }
        }
        if (k == 1) {
                for (int i = 1; i <= n; i ++)
                        if (a[i][1] == 0) {
                                cout << "YES" << endl;
                                return 0;
                        }
                cout << "NO" << endl;
        }
        else if (k == 2) {
                int r = 0,l = 0;
                for (int i = 1; i <= n; i ++) {
                        if (a[i][1] == 0 && a[i][2] == 0) {
                                cout << "YES";
                                return 0;
                        }
                        if (a[i][1] == 0) l ++;
                        if (a[i][2] == 0) r ++;
                }
                if (r >= 1 && l >= 1 && n >= 2)   cout << "YES" << endl;
                else    cout << "NO" << endl;

        }
        else if (k == 3) {
                int f = 0,th = 0,s = 0,fl = 0;
                for (int i = 1; i <= n; i ++) {
                        if (a[i][1] == 0)
                                f ++;
                        if (a[i][3] == 0)
                                th ++;
                        if (a[i][2] == 0)
                                s ++;
                }
                for (int i = 1; i <= n; i ++) {
                        if (a[i][1] == 0 && a[i][2] == 0 && th > 0)
                                fl = 1;
                        if (a[i][1] == 0 && a[i][3] == 0 && s > 0)
                                fl = 1;
                        if (a[i][2] == 0 && a[i][3] == 0 && f > 0)
                                fl = 1;
                }
                if (fl == 1)
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;
        }
        else {
                int f = 0,s = 0,th = 0,fo = 0,fs = 0,fth = 0,ffo = 0,sth = 0,sfo = 0,thfo = 0,fl = 0;
                for (int i = 1; i <= n; i ++) {
                        if (a[i][1] == 0) f ++;
                        if (a[i][2] == 0) s ++;
                        if (a[i][3] == 0) th ++;
                        if (a[i][4] == 0) fo ++;
                }
                for (int i = 1; i <= n; i ++) {
                        if (a[i][1] == 0) {
                                if (a[i][2] == 0 && a[i][3] == 0 && fo > 0)
                                        fl = 1;
                                if (a[i][2] == 0 && a[i][4] == 0 && th > 0)
                                        fl = 1;
                                if (a[i][4] == 0 && a[i][3] == 0 && s > 0)
                                        fl = 1;
                        }
                        if (a[i][2] == 0) {
                                if (a[i][3] == 0 && a[i][4] == 0 && f > 0)
                                        fl = 1;
                        }
                        if (a[i][1] == 0 && a[i][2] == 0)
                                fs = 1;
                        if (a[i][1] == 0 && a[i][3] == 0)
                                fth = 1;
                        if (a[i][1] == 0 && a[i][4] == 0)
                                ffo = 1;
                        if (a[i][2] == 0 && a[i][3] == 0)
                                sth = 1;
                        if (a[i][2] == 0 && a[i][4] == 0)
                                sfo = 1;
                        if (a[i][3] == 0 && a[i][4] == 0)
                                thfo = 1;
                }
                if ((fs > 0 && thfo > 0) || (fth > 0 && sfo > 0) || (ffo > 0 && sth > 0))
                        fl = 1;
                if (fl == 1) {
                        cout << "YES";
                        return 0;
                }
                cout << "NO" << endl;
        }



}
