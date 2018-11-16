#include<bits/stdc++.h>
using namespace std;
int i,i0,n,m;
char a[1000005],b[1000005];
int main()
{
    while(scanf("%d %s %s",&n,a,b)!=EOF)
    {
        m=0;
        for(i=0;i<n;i++)
        {
            if(i+1<n&&a[i]==b[i+1]&&b[i]==a[i+1]&&a[i]!=b[i])
            {
                i++;
                m++;
            }
            else
            {
                m+=a[i]!=b[i];
            }
        }
        printf("%d\n",m);
    }
    return 0;
}