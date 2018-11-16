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
int main()
{
    long long x,y,z;
    long long n;
    long long i;
    long long a=0,b=0,c=0;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if(a==0&&b==0&&c==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
