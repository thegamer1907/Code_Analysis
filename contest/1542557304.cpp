#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    double dh, dm, ds, dt1, dt2;
    ds = s / 60.0;
    dm = (m+ds)/60.0;
    dh = (h%12+dm)/12.0;
    dt1 = (t1%12)/12.0;
    dt2 = (t2%12)/12.0;
    if(dt1 > dt2) swap(dt1, dt2);
    bool f1 = (dt1 < ds && dt1 < dm && dt1 < dh && ds < dt2 && dm < dt2 && dh < dt2);
    if(ds < dt1) ds+=1;
    if(dm < dt1) dm+=1;
    if(dh < dt1) dh+=1;
    dt1 += 1;
    swap(dt1, dt2);
    bool f2 =  (dt1 < ds && dt1 < dm && dt1 < dh && ds < dt2 && dm < dt2 && dh < dt2);
    if(f1||f2)
        puts("YES");
    else puts("NO");
    return 0;
}

