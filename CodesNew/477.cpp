#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,t,a[100006],s,max,v;
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        s=0;
        max=0;
        v=1;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
            while(s>t)
            {
                s-=a[v];
                v++;
            }
            if(i-v+1>max)max=i-v+1;
        }
        cout<<max<<endl;
    }
    return 0;
}
