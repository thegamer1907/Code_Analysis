#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
const long long N=1e5;
long long k ,a[N],s=0,c=0,z=0;
scanf("%d %lld",&n,&k);
for(int i=0;i<n;++i)
{
    scanf("%lld",&a[i]);

s+=a[i];
if(s<=k)
    c++;
else
    {s-=a[z];
z++;}
}
printf("%lld",c);

    return 0;
}