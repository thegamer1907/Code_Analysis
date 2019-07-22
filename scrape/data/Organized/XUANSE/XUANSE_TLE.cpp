#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int maxn=1e5+5;
long long n,m,k,ant=0;
long long a[maxn];
int main()
{
    scanf("%d %d %d",&n,&m,&k);
    long long now,x;
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    now=k;
    for(int i=1;i<=m;)
    {
        x=0;
        while(a[i]>now)
        {
            now+=k;
        }
        while(a[i]<=now)
        {
            x++;
            i++;
        }
        now+=x;
         ant++;

    }
    cout<<ant<<endl;
    return 0;
}