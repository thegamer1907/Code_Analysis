#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef long long ll;

const int inf = 1<<29;
const int mod =(int)1e9+7;

double h, m, s;

double t1, t2;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif // ONLINE_JUDGE
    int t;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        bool flag1 = true, flag2 = true;
        if(t1 > t2) swap(t1,t2);
        h = h + m/60 + s/3600;
        if(h >= 12) h -= 12;
        m = m/60*12 + s/3600*12;
        if(m >= 12) m -= 12;
        s = s/60*12;
        t1 = t1;
        t2 = t2;
        //cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;
        if(h>t1 && h<t2 || m > t1 && m < t2 || s > t1 && s < t2) flag1 = false;

        if((h>t2 || h < t1) || (m > t2 || m < t1) || (s > t2 || s < t1)) flag2 = false;
        //cout<<flag1<<" "<<flag2<<endl;
        if(flag1 | flag2) puts("YES");
        else puts("NO");
    }
    return 0;
}