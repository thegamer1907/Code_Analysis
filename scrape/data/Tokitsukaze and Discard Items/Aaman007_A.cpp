#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pii          pair<char,ll>
#define bug(a)       cerr << #a << " : " << a << endl;
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 1e6;

int main()
{
    ll n,m,k;

    scanf("%lld%lld%lld",&n,&m,&k);

    ll a[m+2] , op = 0 , last = k , lastErLast = 0 , rem = m , start = 0 , st = 0;

    for(int i=0; i<m; i++)
        scanf("%lld",&a[i]);

    while(rem)
    {
        int i1 = upper_bound(a+start,a+m,lastErLast+st)-a;
        int i2 = upper_bound(a+start,a+m,last+start)-a;


        if(i2-i1 <= 0)
        {
            st = 0;
            lastErLast = (a[i2]-start)-((a[i2]-start)%k);
            if((a[i2]-start)%k == 0)
                lastErLast -= k;
            last = lastErLast+k;

        }
        else
            rem -= (i2-i1) , op++ , start += (i2-i1) , st += (i2-i1);
    }
    printf("%lld",op);
}