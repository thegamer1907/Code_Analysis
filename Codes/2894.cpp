#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <climits>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <cstring>
#include <string>
#include <memory.h>
#include <list>
#include <deque>
#include <cstdlib>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF 1000000009
#define N 300005
#define maxn 1000005
#define int long long

using namespace std;

typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef pair <int, ii> iii;
typedef vector <iii> viii;
typedef long long LL;

signed main(){
    //freopen("main.inp", "r", stdin);
    //freopen("main.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int len = s.length();
    int Z[len];
    Z[0] = len;
    int l = 0;
    int r = 0;
    for (int i = 1; i<len; i++)
    {
        if (i > r)
        {
            l = i;
            r = i;
            while (r < len && s[r] == s[r-l]) r++;
            Z[i] = r-l;
            r--;
        }
        else
        {
            int k = i - l;
            if (Z[k] < r - i + 1) Z[i] = Z[k];
            else
            {
                l = i;
                while (r < len && s[r] == s[r-l]) r++;
                Z[i] = r-l;
                r--;
            }
        }
    }
    //for (int i = 0; i<len; i++) cout << Z[i] << " ";
    //cout << "\n";
    l = 1;
    r = len;
    bool flag = false;
    //cout << l << " " << r << "\n";
    while (l <= r)
    {
        int m = (l + r)/2;
        bool fl = false;
        if (Z[len - m] >= m)
        {
            for (int i = 1; i<len-m; i++)
            {
                if (Z[i] >= m)
                {
                    flag = true;
                    fl = true;
                    break;
                }
            }
        }
        if (fl) l = m + 1;
        else r--;

        //cout << l << " " << r << "\n";
    }
    if (!flag) cout << "Just a legend";
    else cout << s.substr(0, r);
    return 0;
}
