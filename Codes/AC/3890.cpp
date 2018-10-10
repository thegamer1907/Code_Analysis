#include<bits/stdc++.h>
using namespace std;

char s[111];
long long nb,ns,nc,pb,ps,pc,m;
int main()
{
    while(~scanf("%s",s))
    {
        scanf("%lld%lld%lld",&nb,&ns,&nc);
        scanf("%lld%lld%lld",&pb,&ps,&pc);
        scanf("%lld",&m);
        int len=strlen(s);
        int countb=0,counts=0,countc=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='B')
                countb++;
            if(s[i]=='S')
                counts++;
            if(s[i]=='C')
                countc++;
        }
        long long l=0,r=1e13,mid,ans;
        while(l<r)
        {
            long long mm=m;
            mid=(l+r)/2;
            if(mid*countb-nb>0)
                mm=mm-(mid*countb-nb)*pb;
            if(mid*counts-ns>0)
                mm=mm-(mid*counts-ns)*ps;
            if(mid*countc-nc>0)
                mm=mm-(mid*countc-nc)*pc;
            if(mm<0)
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        printf("%lld\n",l-1);
    }
    return 0;
}
