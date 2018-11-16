#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,i0,n,m,p;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        p=0;
        while(m>0&&n>0)
        {
            if(m==1&&n==1)break;
            p++;
            if(m>n)m-=2,n+=1;
            else m+=1,n-=2;
        }
        printf("%d\n",p);
    }
    return 0;
}