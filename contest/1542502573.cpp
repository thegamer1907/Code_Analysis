#include<bits/stdc++.h>
using namespace std;
void xx(int&a,int&b,int&c){
    int ss[3];
    ss[0] = a; ss[1] = b; ss[2] = c;
    sort(ss,ss+3);
    a = ss[0], b = ss[1],c = ss[2];
}

int main()
{
    int h,m,s,t1,t2;
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)){
        h *= 5; t1 *= 5; t2 *= 5;
        if(h == 60) h = 0;
        if(t1 == 60) t1 = 0;
        if(t2 == 60) t2 = 0;
        int flag = 0;
        int hh = h*1.0/60*100,mh = m*1.0/60*100, sh = s*1.0/60*100;
        int t1h = t1*1.0/60*100, t2h = t2*1.0/60*100;
        if(mh != 0) hh += 5;
        if(sh != 0) hh += 1;
        if(sh != 0) mh += 1;
        int mx1 = hh,mx2 = mh,mx3 = sh;
        xx(mx1,mx2,mx3);
        if(t1h > t2h) swap(t1h,t2h);
        if(mx1 <= t1h && t2h <= mx2) flag = 1;
        else if(mx2 <= t1h && t2h <= mx3) flag = 1;
        else if(t1h <= mx1 && (t2h >= mx3 || t2h <= mx1)) flag = 1;
        else if(t1h >= mx3 && t2h >= mx3) flag = 1;
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}