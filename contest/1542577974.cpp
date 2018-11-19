#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long long h,m,s,t1,t2,x1=0,x2=0,x3=0,a,b,c,d;
    cin >>h>>m>>s>>t1>>t2;
    a=5*t1;
    b=5*t2;
    c=60*a;
    d=60*a;
    if (s == 0 && m == 0)
        if (t1 == h || t2 == h)
        {
            cout <<"NO";
            return 0;
        }
    if (min(t1,t2) <= h && h < max(t1,t2))
        x1=1;
    if (s != 0)
        if (min(a,b) <= m && m < max(a,b))
            x2=1;
    if (s == 0)
    {
        if (min(a,b) < m && m < max(a,b))
            x2=1;
        if (m == a || m == b)
        {
            cout <<"NO";
            return 0;
        }
    }
    if (s%5 == 0)
    {
        if (min(t1,t2) < s/5 && s/5 < max(t2,t1))
            x3=1;
        if (s/5 == t1 || s/5 == t2)
        {
            cout <<"NO";
            return 0;
        }
    }
    if (s%5 != 0)
        if (min(t1,t2) <= s/5 && s/5 < max(t1,t2))
            x3=1;
    if (x1 == x2 && x2 == x3)
        if (x3 == 1 || x3 == 0)
        {
            cout <<"YES";
            return 0;
        }
    cout <<"NO";
}
