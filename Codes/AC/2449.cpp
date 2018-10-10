#include <bits/stdc++.h>
using namespace std;

#define clr(i, j)     memset(i, j, sizeof(i))
#define pb            push_back
#define mp            make_pair
typedef long long     ll;
const int MAXN = 10000001;
ll fac[MAXN], c[MAXN], pri[MAXN];
void primF()
{
    for(int i=2; i<MAXN; ++i)
    {
        if(!pri[i])
        {
            for(int j=i; j<MAXN; j+=i)
            {
                if(j != i)
                    pri[j] = 1;
                fac[i] += c[j];
            }
        }
    }
}
int main()
{
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
        c[a[i]]++;
    }
    primF();
    for(int i=2; i<MAXN; i++)
        fac[i] += fac[i-1];
    //cout << endl;
    int q;
    scanf("%d", &q);
    for(int i=0; i<q; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        if(r >= MAXN)
            r = MAXN-1;
        if(l >= MAXN)
            l = MAXN-1;
            
        printf("%lld\n", fac[r]-fac[l-1]);
    }
}
