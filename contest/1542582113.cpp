#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h, m, s, t1, t2;
    while(~scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2))
    {
        if(s>0)
            m+=0.5;
        if(m>0)
            h+=0.5;
        m/=5;
        s/=5;
        double maxn=max(t1,t2);
        double minn=min(t1,t2);
        int flag1=0,flag=2;
        int cnt=0;
        if(h>minn&&maxn>h)
            cnt++;
        if(m>minn&&maxn>m)
            cnt++;
        if(s>minn&&maxn>s)
            cnt++;
        if(cnt==3||cnt==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
