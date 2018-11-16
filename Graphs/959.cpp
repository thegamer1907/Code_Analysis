#include <bits/stdc++.h>
using namespace std;
int arra[123456];

int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    for(int i=1;i<n;i++)
    scanf("%d",arra+i);
    int x{1};
    while(x<t)
    x+=arra[x];
    printf("%s\n",((x==t)?"YES":"NO"));
    return 0;
}