#include<iostream>
#include<cstdio>
#include<set>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
using namespace std;
long long a[100005];
long long n,m,k;
long long l,r;
const long long mod=1e18;
int main()
{

    long long s=0;
    long long s1=0;
    long long de=0;
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    l=1;
    r=k;
    for(int i=0; i<m; i++)
    {
        if(a[i]==0)
        {
            scanf("%I64d",&a[i]);
        }

    }
    if(k==1)
    {
        printf("%I64d\n",m);
    }
    else
    {
        for(int i=0; i<m; i++)
        {
            if((a[i]-s)>=l&&(a[i]-s)<=r)
            {
                if(s1==0)
                {
                    de++;
                }
                s1++;
            }
            else if(s1==0&&(a[i]-s)>r)
            {
                if(mod-l<k)
                {
                    break;
                }
                else
                {
                    l+=((a[i]-s-l)/k)*k;
                }
                if(mod-r<k)
                {
                    r=mod;
                }
                else
                {
                    r+=((a[i]-s-l)/k)*k;
                }
                i--;
            }
            else if(s1!=0&&(a[i]-s)>r)
            {
                s+=s1;
                s1=0;
                i--;
            }
        }
        printf("%I64d\n",de);
    }

    return 0;
}