#include<bits/stdc++.h>
using namespace std;
bool vis[30010];

int main()
{
    int n,t,num[30010],d,i,flag=0;
    scanf("%d %d",&n,&t);
    for(i=1; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    i=1;
    while(i<t)
    {

        i=i+num[i];

    }


        if(i==t)printf("YES\n");
        else
            printf("NO\n");


    return 0;

}


