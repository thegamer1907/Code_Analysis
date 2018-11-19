#include<bits/stdc++.h>
using namespace std ;
long long  h, m, s, t1, t2 , l , a , b , us[1111111];
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    t1 = t1 * 30  ;
    t1 %= 360 ;
    t2 = t2 * 30  ;
    t2 %= 360 ;
    h  = h * 30  ;
    h %= 360 ;
    m = m * 6 ;
    m %= 360 ;
    s = s * 6;
    s %= 360 ;
    a = t1 ;
    b = t2 ;
    while(a != t2 && a != h && a != m && a != s)
    {
    a ++ ;
    a %= 360 ;
    }
    if(a == b){cout<<"YES";return 0 ;}
    while(t2 != t1 && t2 != m && t2 != h  && t2 != s)
    {
    t2 ++ ;
    t2 %= 360 ;
    }
    if(t2 == t1){cout<<"YES";return 0 ;}
    cout<<"NO";
    return 0 ;
}
/**9 5 5 11 12*/
