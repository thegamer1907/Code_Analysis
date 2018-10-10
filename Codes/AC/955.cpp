#include<bits/stdc++.h>
using namespace std;
int i,i0,n,m,k,ans;
char a[100005];
int main()
{
    while(scanf("%d %d %s",&n,&k,a)!=EOF)
    {
        m=ans=0;
        int p1=0,p2=0;
        for(p1=0;a[p1]!='\0';p1++)
        {
            if(a[p1]=='b')m++;
            while(m>k)
            {
                if(a[p2]=='b')m--;
                p2++;
            }
            ans=max(ans,p1-p2+1);
        }
        m=0;
        p1=0,p2=0;
        for(p1=0;a[p1]!='\0';p1++)
        {
            if(a[p1]=='a')m++;
            while(m>k)
            {
                if(a[p2]=='a')m--;
                p2++;
            }
            ans=max(ans,p1-p2+1);
        }
        printf("%d\n",ans);
    }
    return 0;
}