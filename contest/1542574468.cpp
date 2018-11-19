#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[10];
char m[10];
int a[100];
int b[100];
int c[100];
int main()
{
    int h,m,s,t1,t2;
    int i,j;
    while(~scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2))
    {
        h=(h*5)%60;
        t1=t1*5;
        t2=t2*5;
        if(s==0)
            s=60;
        if(m==0)
            m=60;
        int sh=h; int sm=m; int ss=s;
        h=max(sh,max(sm,ss));
        m=min(sh,min(sm,ss));
        s=ss+sh+sm-h-m;
        double a1=(h*1.0-0.0)/60.0;
        double a2=(s*1.0-0.0)/60.0;
        double a3=(m*1.0-0.0)/60.0;
        double k1=(t1*1.0-0.0)/60.0;
        double k2=(t2*1.0-0.0)/60.0;
        if(ss!=0&&sm!=0)
        {
            if(sh==h)
                a1=a1+0.01;
            else if(sh==m)
                a3=a3+0.01;
            else if(sh==s)
                a2=a2+0.01;
        }
       // printf("%f %f %f %f %f\n",a1,a2,a3,k1,k2);
        if((k2>a3&&k2<=a2&&k1>a3&&k1<=a2)||(k2>a2&&k2<=a1&&k1>a2&&k1<=a1)||((k2>a1||k2<=a3)&&(k1>a1||k1<=a3)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
