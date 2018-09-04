#include <bits/stdc++.h>
using namespace std;
#define int long long
#define point pair<int,int>
#define pb push_back
#define X first
#define Y second
#define engl "\n"
int in(){int32_t x ; scanf("%d",&x) ;  return x ;}
inline long long lin() {long long x ; scanf("%lld",&x) ; return x ;}
inline void read(int *a , int n) {for (int i = 0 ; i < n ; i ++) a[i] = in();}
inline void readL(int *a , int n) {for (int i = 0 ; i < n ; i ++) a[i] = lin();}
const int maxn = 2e6 + 10;
const int mod = 1e9 + 7;
const int MAX_VAL = 1e18 + 10;
const int MAGIC = 350;
typedef pair<int,int> pii;
int a[maxn],n,bu,b[maxn],sum;
inline bool check(int cnt)
{
    for (int i = 0 ; i < n ; i ++)
        b[i] = a[i]+cnt*(i + 1);
    sort(b,b+n);
    sum = 0;
    for (int i = 0 ; i < cnt ; i ++)
        sum += b[i];
    return sum <= bu;
    
}
int32_t main()
{
    n = in() , bu = in();
    read(a,n);
    int low = 0 , hi = n + 1;
    while(low + 1 < hi)
    {
        int mid = (low + hi) >> 1;
        if (check(mid))
            low = mid;
        else hi = mid;
    }
    check(low);
    cout << low  << " " << sum << "\n";
}
