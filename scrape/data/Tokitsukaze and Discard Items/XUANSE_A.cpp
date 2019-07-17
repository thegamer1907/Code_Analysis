#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int maxn=1e5+5;
long long n,m,k,ant=0;
long long a[maxn];
int main()
{
    scanf("%lld %lld %lld",&n,&m,&k);
    long long now,x,y=0;
    for(int i=1;i<=m;i++)
    {
        scanf("%lld",&a[i]);
    }
    now=k;
    for(int i=1;i<=m;)
    {
        x=0;
        while(a[i]>now)
        {
            if((a[i]-now)%k==0)
            {
                now+=a[i]-now;
            }
            else
            {
                now+=(((a[i]-now)/k)+1)*k;
            }

        }
        while(a[i]<=now)
        {
            x++;
            i++;
        }
        now+=x;
        y+=x;
         ant++;

    }
    cout<<ant<<endl;
    return 0;
}