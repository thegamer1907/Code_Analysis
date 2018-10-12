#include <bits/stdc++.h>
using namespace std;
const int psz=1e5+9;
typedef long long ll;
ll a[psz];int n;
bool check(ll m)
{
    ll sum=0;
    for (int i=1;i<=n;++i)
       {
         sum+=m-a[i];
         if (m < a[i]) return false;
       }
    if (sum>=m) return true;
    return false;
}
int b_search()
{
    ll l=0,h=1e10,m;
    while (l<h)
    {
        m=(l+h)/2;
        if (check(m)) h=m;
        else l=m+1;
    }
    return l;
}

int main()
{
    cin>>n;
    for (int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
   cout << b_search();
}
