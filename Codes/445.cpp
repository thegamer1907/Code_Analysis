#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int cnt=0,i=1;
        while(cnt<=n)
        {
            int k=i;
            int sum=0;
            while(k!=0)
            {
                sum+=k%10;
                k/=10;
            }
            if(sum==10)
            {
                cnt++;
                if(cnt==n)
                {
                    printf("%d\n",i);
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}
