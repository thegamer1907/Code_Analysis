#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1, t2;
    double m, s, h;
    while(~scanf("%lf %lf %lf %d %d", &h, &m, &s, &t1, &t2))
    {
        if(t1 > t2) swap(t1, t2);
        if(m || s)
        {
            h += 0.1;
        }
            m = m / 5;
            s = s / 5;
            if(s) m += 0.05;
            if(t1 < h && h < t2 && t1 < m && m < t2 && t1 < s && s < t2)
                printf("YES\n");
            else if((t1 >= h || h >= t2) && (t1 >= m || m >= t2) && (t1 >= s || s >= t2))
                printf("YES\n");
            else printf("NO\n");
    }
    return 0;
}
