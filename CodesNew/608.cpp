#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mod=1e7 + 7;
#define PI 3.14159265
typedef long long int ll;
const long long int N=1e6 + 9;


int main() {
    timesaver;
    ll n  , t , x = 0 , y = 0 , i , m , k , l = 0 , cnt = 0 , j = 0 , flag = 0 , dp[100009] = {0} , b[100009] = {0} ,a[100009], ans = 0 , p = 0 ,q = 0 , pe = 0 , r;
    string s;
    map <string , ll> mp , mp1;
    cin >> n >> m;
    if(n > m)
    return cout << "YES" , 0;
    for(i = 0; i < n; i++)
    {
        cin >> s;
        mp[s] = 1;
    }
    for(i = 0; i < m; i++)
    {
        cin >> s;
        if(mp[s] == 1)
        x++;
    }
    n = n - (x / 2);
    m = m - (x + 1) / 2;
    if(n > m)
    cout << "YES";
    else
    cout << "NO";
    return 0; 
}