#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc second
#define fr first
#define cs 111111
using namespace std ;
ll  l, r, m, k, ans, p = 2, d, x, t, lc, rc, la, ra, lt, rt;
ll n , i , z;
string  a[cs] , b[cs] ;
map<string , ll>us ;
pair<ll , string>a1[cs] , b1[cs] ;
int main()
{
    cin>>n>>m;
    for(i = 1 ; i <= n ; i ++)
    {
        cin>>a[i];
        us[a[i]] ++ ;
    }
      for(i = 1 ; i <= m ; i ++)
    {
        cin>>b[i];
        us[b[i]] ++ ;
    }
    for(i = 1 ; i <= n ; i ++)
    {
        a1[i].fr = us[a[i]] ;
        a1[i].sc = a[i] ;
    }
    for(i = 1 ; i <= m ; i ++)
    {
        b1[i].fr = us[b[i]] ;
        b1[i].sc = b[i] ;
    }
    sort(a1 + 1 , a1 + 1 + n);
    sort(b1 + 1 , b1 + 1 + m);
    while(x == 0)
    {
        if(n == 0)
        {
            cout<<"NO";
            return 0 ;
        }
        while(us[a1[n].sc] == 0)
        {
            if(n == 0)
        {
            cout<<"NO";
            return 0 ;
        }
            n -- ;
        }
        us[a1[n].sc] = 0 ;
        n -- ;
        if(m == 0)
        {
            cout<<"YES";
            return 0 ;
        }
        while(us[b1[m].sc] == 0)
        {
            if(m == 0)
        {
            cout<<"YES";
            return 0 ;
        }
            m -- ;
        }
        us[b1[m].sc] = 0 ;
        m -- ;
    }
}
