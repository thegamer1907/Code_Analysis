#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(long long i=a; i<=b; ++i)
#define FOD(i,a,b) for(long long i=b; i>=a; --i)
#define pb push_back

//ifstream fi("e3.inp");
//ofstream fo("e3.out");

typedef vector<long> vi;
typedef pair<long, long> ii;

long n, k;
long a[300005], f[300005];

int main()
{
    cin >> n >> k;
    for (int i=1; i<=n; ++i)
    {
        cin >> a[i];
        f[i]=f[i-1]+a[i];
    }
    long m=0, res=0, r, l;
    for (int i=1; i<=n; ++i)
    {
        while (i-m-(f[i]-f[m])>k) ++m;
        if (res<i-m)
        {
            res=i-m;
            l=m+1, r=i;
        }
    }
    cout << res << '\n';
    for (int i=l; i<=r; ++i) a[i]=1;
    for (int i=1; i<=n; ++i) cout << a[i] << ' ';
}
