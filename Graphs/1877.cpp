#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    bool used[1005];
   ll cnt = 0;
   ll n , m , a[1005] , b[1005];
   cin >> n;
   for(ll i = 0 ; i < n ;i ++)
{
    cin >> a[i];
}
sort(a,a+n);
cin >> m;
for(ll j = 0 ; j < m ; j ++)
{
    cin >> b[j];
}
sort(b,b+m);
for(ll i = 0 ; i < n ; i++ )
{
    for(ll j = 0 ; j < m ; j ++)
    {
        if(!used[j] && abs(a[i] - b[j]) <= 1)
        {
            used[j] = true;
            cnt++;
            break;
        }
    }
}
cout<<cnt;
}
