#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double h, m, s, t1, t2;
    scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);

    if(t1 > t2)
    swap(t1, t2);
    int f = 0;
    double T1 = 5*t1, T2 = 5*t2;

    h += m/60.0 + s/3600.0;
    m += s/60.0;

    if(T1/5 <= h && h <= T2/5)
    {
        if(T1 <= m && m <= T2 && T1 <= s && s <= T2)
        f = 1;
    }
    else 
    {
        if(h < T1/5 || h > T2/5 )
        {
            if((m < T1 || m > T2) && (s < T1 || s > T2))
            f = 1;
        }
    }
    if(f)
    puts("YES");
    else 
    puts("NO");


} 