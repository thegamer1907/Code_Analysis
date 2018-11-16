#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, ans=0, i, j, c=0, ones=0, max=-1e9, flg;
    cin >> n;
    ll a[n], b[n];
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        ans=ans+a[i];
        if(a[i]==0)b[i]=1;
        else b[i]=-1;
    }
    for(i=1; i<=n; i++)
    {
        if(ones>=0)ones+=b[i];
        else ones=b[i];
        if(ones>max)max=ones;
    }
    cout << max + ans;
    return 0;
}
