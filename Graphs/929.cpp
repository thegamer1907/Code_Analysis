#include<cstdio>
#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn=1e5+10;
int main()
{
    int n,t;
    int a[maxn];
    scanf("%d%d",&n,&t);
    for(int i=1;i<n;i++)
        scanf("%d",&a[i]);
    int j=1,flag=0;
    int i=1;
    while(i<=n-1)
    {
        i=a[i]+i;
        //printf("%d\n",i);
        if(i==t)
        {
            flag=1;
            break;
        }
        j++;
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}