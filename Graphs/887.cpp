#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include <iomanip>
#include<cmath>
#include<stack>
#include <algorithm>
#include<cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[110000];
int main()
{
    long long n,m;
    scanf("%lld%lld",&n,&m);
    long long ans=1;
    long long cnt=0;
    long long i,j,k;
    for(i=1; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(m==1)
        cnt=1;
    else
        for(j=1; j<n;)
        {
            j+=a[j];
            if(j==m)
            {
                cnt=1;
                break;
            }
            else if(j>m)
            {
                cnt=0;
                break;
            }
        }
    if(j<m)
        cnt=0;
    if(cnt)
        printf("YES");
    else
        printf("NO");
    return 0;
}
