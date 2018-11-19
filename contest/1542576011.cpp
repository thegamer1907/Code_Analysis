#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

double a[5], t1, t2;

int main()
{
    scanf("%lf%lf%lf", &a[0], &a[1], &a[2]);
    scanf("%lf%lf", &t1, &t2);
    t1 *= 30.0;
    t2 *= 30.0;
    a[1] *= 6;
    a[2] *= 6;
    a[0] *= 30.0;

    a[1] += a[2]/60.0;
    a[0] += a[1]/12.0;

    if(a[0] >= 360.0)
        a[0] -= 360.0;

    sort(a, a+3);

    //printf("%f\n%f\n%f\n%f\n%f\n", a[0], a[1], a[2], t1, t2);

    if(a[0]<=t1&&t1<=a[1] && a[0]<=t2&&t2<=a[1])
    {
        puts("YES");
        return 0;
    }
    if(a[1]<=t1&&t1<=a[2] && a[1]<=t2&&t2<=a[2])
    {
        puts("YES");
        return 0;
    }
    if(t1 < a[0])
        t1 += 360.0;

    if(t2 < a[0])
        t2 += 360.0;
    a[0] += 360.0;
    if(a[2]<=t1&&t1<=a[0] && a[2]<=t2&&t2<=a[0])
    {
        puts("YES");
        return 0;
    }

    puts("NO");

    return 0;
}
