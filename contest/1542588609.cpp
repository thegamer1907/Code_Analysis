#include<bits/stdc++.h>
using namespace std;

set<int> b;

int main()
{
    int h,m,s,f,t;
    scanf("%d%d%d%d%d",&h,&m,&s,&f,&t);
    m = m*60 + s;
    h = (h%12)*3600 + m;
    f = (f%12)*3600;
    t = (t%12)*3600;
    m *= 12;
    s *= 60*12;
    b.insert(h);
    b.insert(m);
    b.insert(s);
    if(f>t) swap(f,t);
    auto it = b.upper_bound(f);
    if(it == b.end() || *it > t)
    {
        puts("YES");
        return 0;
    }
    if(f < *b.begin() && t > *b.rbegin())
    {
        puts("YES");
        return 0;
    }
    puts("NO");
}
