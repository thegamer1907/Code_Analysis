#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;
int h,m,s,t1,t2;
int f[100];
int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h*=5,t1*=5,t2*=5;
    h%=60;
    m%=60;
    s%=60;
    f[h]++;
    f[m]++;
    f[s]++;
    if(t1>t2) swap(t1,t2);
    int ans=0;
    for(int i=t1;i<t2;i++)ans+=f[i];
    if(ans%3==0)puts("YES");
    else puts("NO");
return 0;
}
