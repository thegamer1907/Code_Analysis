#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int k;
    char s[1000020];
    while(~scanf("%d",&k))
    {
        scanf("%s",s);
        int len=strlen(s);
        ll cnt=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        if(cnt<k)
        {
            printf("0\n");
            continue;
        }
        ll ans=0;
        if(k==0)
        {
            for(int i=0;i<len;i++)
            {
                cnt=0;
                while(s[i]=='0')
                {
                    cnt++;
                    i++;
                }
                ans+=(cnt+1)*cnt/2;
            }
            printf("%I64d\n",ans);
            continue;
        }
        int l,r;
        l=r=0;
        cnt=0;
        ll tp1,tp2;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
                cnt++;
            if(cnt==k)
            {
                tp1=tp2=0;
                bool flag=false;
                while(l<len&&s[l]=='0')
                    tp1++,l++;
//                printf("i=%d\n",i);
                if(i+1<len&&s[i+1]=='0')
                {
                    i++;
                    flag=true;
                    while(i<len&&s[i]=='0')
                    {
                        tp2++,i++;
                    }
                }
                tp1++;
                tp2++;
//                printf("tp1=%I64d tp2=%I64d\n",tp1,tp2);
                ans+=(tp1*tp2);
                if(flag)
                    i--;
                cnt--;
                if(s[l]=='1')
                    l++;
//                printf("l=%d i=%d\n",l,i);
            }
        }
        printf("%I64d\n",ans);
    }
    return 0;
}






