
#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define lb long double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

ll n;

bool check(ll k) {
    ll vas=0;
    ll rem=n;
    while (rem>0) {
        ll tmp=min(rem,k);
        vas+=tmp;
        rem-=tmp;
        ll pet=rem/10;
        rem-=pet;
    }
    return vas*2>=n;
}

int main()
{
    scanf("%lld",&n);
    ll lo=1,hi=n;
    while (lo<hi) {
        ll mid=(lo+hi)>>1;
        if (!check(mid)) {
            lo=mid+1;
        } else {
            hi=mid;
        }
    }
    printf("%lld\n",lo);
}