
#include<algorithm>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,n,i,j,count=0;
    scanf("%d",&n);
    int boy[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&boy[i]);
    }
    scanf("%d",&m);
    int girl[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&girl[i]);
    }
    sort(boy,boy+n);
    sort(girl,girl+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(boy[i]-girl[j])<=1)
            {
                count++;
                girl[j]=1000;
                boy[i]=1000;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
