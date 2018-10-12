#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
using namespace std;
const int maxn=105;
int n,m;
int a[maxn];
int main()
{
    scanf("%d %d",&n,&m);
    int ansmin,ansmax=0;
    int temp=0;
    int temp1=m;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        ansmax=max(ansmax,a[i]);
    }
    for(int i=1;i<=n;i++)
        temp+=(ansmax-a[i]);
//    cout<<temp<<endl;
    if(temp>=m)
        ansmin=ansmax;
    else
    {
        m=m-temp;
        int k=m%n;
        m=m/n;
        if(k>0)
            m++;
        ansmin=ansmax+m;
    }
    ansmax+=temp1;
    printf("%d %d\n",ansmin,ansmax);
    return 0;
}
