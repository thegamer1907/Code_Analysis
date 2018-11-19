#include<bits/stdc++.h>
using namespace std;
long long h , m , s , t1 , t2  ,a , b ;
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>h>>m>>s>>t1>>t2;
    h = (h * 3600 + m * 60 + s ) % 43200;
    m = (m * 720 + s) % 43200 ;
    s = (s * 720) % 43200 ;
    t1 = t1 * 3600 ;
    t2 = t2 * 3600 ;
    a = t1 , b = t2 ;
    t1 = min(a , b) , t2 = max(a , b);
    if((t1<=h && h<=t2) || (t1<=m && m<=t2) || (t1<=s && s<=t2)){

        if((t1 >= h) || (t1 >= m) || (t1 >= s) || (t2<=h) || (t2 <= m) || (t2 <= s))
            cout <<"NO";
        else cout <<"YES";
    }
    else cout <<"YES";
}