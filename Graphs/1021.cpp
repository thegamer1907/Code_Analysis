#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i;
    int ara[30009];

    scanf("%d %d",&a,&b);
    for(i=1; i<a; i++)
    {
        scanf("%d",&ara[i]);
    }
    int s=1;
    int flag=0;

    for(i=1; i<a; )
    {
        s+=ara[i];
        if(s==b) {flag=1; break;}
        else if(s>b) break;
        i=s;
    }
    if(s==b) flag=1;

    if(flag==0) printf("NO\n");
    else printf("YES\n");
    return 0;
}
