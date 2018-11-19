#include <bits/stdc++.h>
using namespace std;


int main()
{
    double h,m,s,t1,t2;
    double sum[5];
    while (~scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2))
    {
        sum[0]=s/60.0;
        sum[1]=m/60.0+sum[0]/60.0;
        sum[2]=h/12.0+sum[1]/12.0;
        sum[3]=t1/12.0;
        double a1=sum[3];
        sum[4]=t2/12.0;
        double a2=sum[4];
        sort(sum,sum+5);
        int f=0;
        for (int i=0;i<5;i++){
            if ((sum[i]==a1&&sum[i-1]==a2)||(sum[i]==a2&&sum[i-1]==a1)){
                f=1;
                break;
            }
        }
        if ((sum[0]==a1&&sum[4]==a2)||(sum[0]==a2&&sum[4]==a1))
            f=1;
        if (f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
