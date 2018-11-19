#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    int mii=min(t1,t2);
    int maxx=max(t1,t2);
    int flag=0;
    if(t1==t2)
    {
        printf("YES\n");
        return 0;
    }
    if(m==maxx*5&&s==0)
        flag=1;
    if(m>=mii*5&&m<maxx*5)
        flag=1;
    if(s>=mii*5&&s<=maxx*5)
        flag=1;
    if(h==maxx&&m==0&&s==0)
        flag=1;
    if(h>=mii&&h<maxx)
        flag=1;
    if(!flag) 
    {
        printf("YES\n");
        return 0;
    }
    flag=0;
    if(m>=maxx*5&&m<=59)
        flag=1;
    if(s>=maxx*5&&s<=59)
        flag=1;
    if(h>=maxx&&h<=12)
        flag=1;
    if(m>=0&&m<mii*5)
        flag=1;
    if(s>=0&&s<=mii*5)
        flag=1;
    if(h>=0&&h<mii)
        flag=1;
    if(m==mii*5&&s==0)
        flag=1;
    if(h==mii&&m==0&&s==0)
        flag=1;
    if(!flag)
        printf("YES\n");
    else printf("NO\n");
}