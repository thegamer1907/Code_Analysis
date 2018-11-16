#include<bits/stdc++.h>
using namespace std;
int i,i0,n,m;
int main()
{
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(min(n,m)%2)printf("Akshat\n");
        else printf("Malvika\n");
    }
    return 0;
}

