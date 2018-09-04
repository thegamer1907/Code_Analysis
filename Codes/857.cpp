/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 5000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second
#define inf 9000000000000000000
ll n, k;

ll power(ll x,ll n)
{
    if(n==0)
        return 1;

    if(n%2 == 0)
        return power((x*x),n/2);
    else
        return (x*power((x*x),(n-1)/2));

}

ll bin(ll l, ll r)
{
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(mid==k)
            return n;

        n--;
        if(l<=k && k<mid)
            return bin(l, mid-1);
        else
            return bin(mid+1, r);

    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>k;
    cout<<bin(1, power(2,n) - 1)<<"\n";

    return 0;
}
