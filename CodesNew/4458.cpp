#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
string a[500010];
int n,lens[500010],b[500010];
int main()
{
//  freopen("d.in","r",stdin);
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
      {
        cin>>a[i];
        b[i]=a[i].length();
      }
    lens[n]=b[n];
    for(int i=n;i>1;--i)
      {
        bool flag=0;
        for(int j=0;j<lens[i];++j)
          {
            if(j>=b[i-1])
              {
                lens[i-1]=b[i-1];
                flag=1;
                break;
              }
            if(a[i][j]<a[i-1][j])
              {
                lens[i-1]=j;
                flag=1;
                break;
              }
            if(a[i][j]>a[i-1][j])
              {
                lens[i-1]=b[i-1];
                flag=1;
                break;
              }
          }
        if(!flag)
          lens[i-1]=lens[i];
      }
    for(int i=1;i<=n;++i)
      {
        for(int j=0;j<lens[i];++j)
          putchar(a[i][j]);
        puts("");
      }
    return 0;
}