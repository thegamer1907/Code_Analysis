#include<bits/stdc++.h>
#define ll long long
#define fucked return 0
using namespace std;
int main()
{
    ll a,b,c,ans1 = 0 , ans2 =  0, ans3 = 0 ;
ll n;
   cin >> n;
    for(ll i = 0 ; i < n ; i++ )
    {
        cin >> a >> b >> c;
        ans1 += a;
        ans2 += b;
        ans3 += c;
    }
if(ans1 == 0 and  ans2 ==  0 and ans3 == 0)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
}
