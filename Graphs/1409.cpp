#include<stdio.h>
int main()
{
    int n,t,i,j=0,b=0,sum=0;
    int ara[3*10000];
    scanf("%d%d", &n, &t);
    for(i=0; i<n-1; i++){
        scanf("%d", &ara[i]);

    }

    for(i=0; i<n; i++){
        sum=j+1+ara[j];
        if(sum==t) {b=1;break;}
        else j=sum-1;
        if(j>t) break;
    }

    if(b==1)
      printf("YES");
      else printf("NO");

    return 0;
}
