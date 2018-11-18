#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
    int n,k;scanf("%d%d",&n,&k);
    if(k==1){
        int one=0,zero=0;int u;
        for(int i=0;i<n;i++){
            scanf("%d",&u);
            if(u==0)zero++;else one++;
        }
        if(zero>0)printf("YES\n");
        else printf("NO\n");
    }
    if(k==2){
        for(int i=0;i<n;i++){
            int xa,xb;scanf("%d%d",&xa,&xb);
            int tc=xa*2+xb;
            a[tc]++;
        }
        if(a[0]>0 ||(a[1]>0 && a[2]>0))printf("YES\n");
        else printf("NO\n");
    }
    if(k==3)
    {
        for(int i=0;i<n;i++)
        {
            int xa,xb,xc;
            scanf("%d%d%d",&xa,&xb,&xc);
            int tc=xa*4+xb*2+xc;
            a[tc]++;
        }
        if(a[0]>0)
        {
            printf("YES\n");return 0;
        }
        else if(a[1]>0 && (a[2]>0||a[4]>0 || a[6]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[2]>0 && (a[4]>0 || a[5]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[3]>0 && a[4]>0)
        {
            printf("YES\n");return 0;
        }
        else
        {
            printf("NO\n");return 0;
        }
    }
    if(k==4)
    {
        for(int i=0;i<n;i++)
        {
            int xa,xb,xc,xd;scanf("%d%d%d%d",&xa,&xb,&xc,&xd);
            int tc=xa*8+xb*4+xc*2+xd;
            a[tc]++;
        }
        if(a[0]>0)
        {
            printf("YES\n");return 0;
        }
        else if(a[1]>0 && (a[2]>0||a[4]>0 || a[6]>0 ||a[8]>0||a[10]>0||a[12]>0 || a[14]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[2]>0 && (a[4]>0 ||a[5]>0||a[8]>0||a[9]>0||a[12]>0||a[13]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[3]>0 && (a[4]>0||a[8]>0||a[12]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[4]>0 && (a[8]>0||a[9]>0||a[10]>0||a[11]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[5]>0 && (a[8]>0||a[10]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[6]>0 && (a[8]>0||a[9]>0))
        {
                printf("YES\n");return 0;
        }
        else if(a[7]>0 && a[8]>0)
        {
            printf("YES\n");return 0;
        }
        else
        {
            printf("NO\n");return 0;
        }
    }
}
