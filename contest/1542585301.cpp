#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int h,m,s,t1,t2;

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    h%=12,t1%=12,t2%=12,h=h*60*60+m*60+s,m=m*60*12+s*12,s*=60*12,t1*=60*60,t2*=60*60;
    if (t1>t2)
        swap(t1,t2);
    if (!(t1<=h && h<=t2 || t1<=m && m<=t2 || t1<=s && s<=t2))
        return puts("YES");
    if (h>=t2)
        h-=60*60*12;
    if (m>=t2)
        m-=60*60*12;
    if (s>=t2)
        s-=60*60*12;
    t2-=60*60*12;
    swap(t1,t2);
    if (!(t1<=h && h<=t2 || t1<=m && m<=t2 || t1<=s && s<=t2))
        return puts("YES");
    puts("NO");
    return 0;
}
