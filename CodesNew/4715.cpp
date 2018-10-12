#include <bits/stdc++.h>
using namespace std;


//TEMPLATE
#define pb              push_back
#define mp              make_pair
#define ll              long long int
#define pi              3.1415926536
#define mod             1000000007
#define newline         printf("\n")
#define printminusone   printf("-1\n")
#define scand(n)        scanf("%lld", &n)
#define printd(n)       printf("%lld\n", n)
#define scandd(n)       scanf("%lf", &n)
#define printdd(n)      printf("%lf\n", n)
#define reversed(s)     reverse(s.begin(), s.end())
#define asorted(s)      sort(s.begin(), s.end())
#define dsorted(s)      sort(s.begin(), s.end(), descending_func)
#define for0(i, n)      for (i = 0; i < n; i++)
#define for1(i, n)      for (i = 1; i <= n; i++)
#define paired          pair <ll, ll>
#define pii             pair <ll, paired>
#define SIZE            100005
#define INF             1000000005

ll dr4[] = {0, 1, -1, 0, 0};
ll dc4[] = {0, 0, 0, 1, -1};

ll gcd(ll x, ll y) {
    if(y == 0) {
        return x;
    }
    return gcd(y, x%y);
}

ll khujo(ll a[], ll en, ll num) {
    ll mid, st = 1, ans = -1;

    while(st <= en) {
        mid = (st + en) / 2;

        if(num >= a[mid]*2) {
            ans = mid;
//            cout << mid << " " << a[mid] << endl;
            st = mid + 1;
        }
        else {
            en = mid - 1;
        }
    }
    return ans;
}

int main() {
    ll t, n, m, a, b, x, y, z, i, j, k, range;
    scand(n);

    ll cang[n+1];
    for1(i, n) {
        scand(cang[i]);
    }
    sort(cang+1, cang+n+1);

    if(n%2) {
        range = n/2 + 2;
    }
    else {
        range = n/2 + 1;
    }

    x = n-1, t = n;
    for(i = n; i >= range; i--) {
        ll in = khujo(cang, x, cang[i]);
        if(in != -1) {
            t--;
            x = in - 1;
//            cout << in << " " << x << " " << i << " " << cang[i] << endl;
        }
    }

    printd(t);

    return 0;
}

