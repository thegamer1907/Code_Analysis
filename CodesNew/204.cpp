#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;



int main()
{
    ll n, t, num, sum = 0, ans = -1, temp;
    cin >> n >> t;
    vector<ll>v(n + 1);

    v.at(0)= 0;

    for(ll i = 1; i < n + 1; ++i)
    {
        cin >> num;
        sum += num;
        v.at(i) = sum;
    }
    for(int i = 1; i < n + 1; ++i)
    {

       temp = (distance(v.begin() + i, upper_bound(v.begin() + i,v.end(), t + v.at(i - 1))));
       if(temp > ans)
       {
           ans = temp;
       }


    }
    cout << ans;


}
