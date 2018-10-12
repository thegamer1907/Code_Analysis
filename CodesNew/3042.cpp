#include <bits/stdc++.h>
using namespace std;
char str[1000500];
int main()
{
    long long l,cnt,len,sum,ss;
    scanf("%lld",&len);
    scanf("%s",str+1);
    sum=0;
    cnt=0;
    ss=0;
    l=0;
    for(int i=1;str[i];i++)
    {
        if(str[i]=='1')
            sum++;
        if(str[i]=='1'&&len==0)
        {
            cnt=0;
            continue;
        }
        else if(str[i]=='0'&&len==0)
        {
            cnt++;
            ss+=cnt;
        }
        else if(sum>=len&&str[i]=='1')
        {
            l++;
            cnt=1;
            while(str[l]=='0'&&l<i)
            {
                l++,cnt++;
            }
            ss+=cnt;
        }
        else if(sum>=len&&str[i]=='0')
        {
            ss+=cnt;
        }
   //// printf("%lld\n",ss);
    }
    printf("%lld\n",ss);
    return 0;
}
