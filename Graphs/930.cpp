#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ara[100000];
    scanf("%d%d",&a,&b);
    for(int i=1;i<a;i++)
    {
      scanf("%d",&ara[i]);
    }
    int count1=1;
    for(int i=0;i<a;i++)
    {
        count1=count1+ara[count1];
        if(count1==b)
        {
            printf("YES");
            break;
        }
        else if(count1>b)
        {
            printf("NO");
            break;
        }
    }
}
