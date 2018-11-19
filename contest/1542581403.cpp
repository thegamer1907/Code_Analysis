#include <bits/stdc++.h>
#define rank ra
#define lson rt<<1
#define rson rt<<1|1
#define pb push_back
using namespace std;
typedef long long ll;
int h,m,s,t1,t2;
int main()
{
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
    {
        h=h*5;
        h=h%60;
        t1=t1*5;
        t1=t1%60;
        t2=t2*5;
        t2=t2%60;
        if(t1>t2)
            swap(t1,t2);
        int flag1=1,flag2=1;
        for(int i=t1;i<t2;i++)
        {
            if(i==h||i==s||i==m)
                flag1=0;
        }
        for(int i=t2;i<t1+60;i++)
        {
            int k=i%60;
            if(k==h||k==s||k==m)
                flag2=0;
        }
        if(flag1||flag2)
            printf("YES\n");
        else
            printf("NO\n");
    }
}