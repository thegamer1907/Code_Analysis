#include<bits/stdc++.h>
using namespace std;
int cnt[16];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=k;j++)
        {
            int a;
            scanf("%d",&a);
            sum=sum*2+a;
        }
        cnt[sum]++;
    }
    if(k==1)
    {
        if(cnt[0]) printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    else if(k==2)
    {
        if(cnt[0]) printf("YES\n");
        else if(cnt[1]&&cnt[2]) printf("YES\n");
        else printf("NO\n");
        return 0;
    }
    else if(k==3)
    {
        if(cnt[0]) {printf("YES\n");return 0;}
        if(cnt[1])
        {
            int sign=0;
            for(int i=1;i<8;i++) if(cnt[i]&&((i&(1<<0))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        if(cnt[2])
        {
            int sign=0;
            for(int i=1;i<8;i++) if(cnt[i]&&((i&(1<<1))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        if(cnt[4])
        {
            int sign=0;
            for(int i=1;i<8;i++) if(cnt[i]&&((i&(1<<2))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        printf("NO\n");
        return 0;
    }
    else if(k==4)
    {        
        if(cnt[0]) {printf("YES\n");return 0;}
        if(cnt[1])
        {
            int sign=0;
            for(int i=1;i<=15;i++) if(cnt[i]&&((i&(1<<0))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        if(cnt[2])
        {
            int sign=0;
            for(int i=1;i<=15;i++) if(cnt[i]&&((i&(1<<1))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        if(cnt[4])
        {
            int sign=0;
            for(int i=1;i<=15;i++) if(cnt[i]&&((i&(1<<2))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        if(cnt[8])
        {
            int sign=0;
            for(int i=1;i<=15;i++) if(cnt[i]&&((i&(1<<3))==0)) {sign=1;break;}
            if(sign) {printf("YES\n");return 0;}
        }
        if(cnt[3]&&cnt[12]) {printf("YES\n");return 0;}
        if(cnt[5]&&cnt[10]) {printf("YES\n");return 0;}
        if(cnt[6]&&cnt[9]) {printf("YES\n");return 0;}
        printf("NO\n");
        return 0;
    }
    return 0;
}
