#include <stdio.h>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;
int a[20];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    memset(a,0,sizeof(a));
    int num,temp;
    for(int i=0;i<n;i++)
    {
        num=0;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&temp);
            if(temp)
                num|=1<<j;
        }
        a[num]++;
    }
    int flag=false;
    for(int i=0;i<1<<k;i++)
        for(int j=0;j<1<<k;j++)
        {
            if(!(i&j)&&a[i]&&a[j])
                flag=true;
        }
    printf("%s\n",flag?"YES":"NO");
    return 0;
}

				 		   	 		     	 	 	  		 		