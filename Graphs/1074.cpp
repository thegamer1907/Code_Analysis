#include<bits/stdc++.h>
using namespace std;
#define p printf("bug\n");
int x[1000000];
int main()
{
//freopen("output.txt", "w", stdout);
    int n,t,i,start;

    scanf("%d %d",&n,&t);

    for(i=1; i<n; i++)
    {
        scanf("%d",&x[i]);
    }

    start=1;
    while(start<t)
        start+=x[start];
    if(start==t)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
