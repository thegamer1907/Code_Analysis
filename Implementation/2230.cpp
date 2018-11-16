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
    long long k,n,w;
    long long sum=0;
    long long i;
    scanf("%lld%lld%lld",&k,&n,&w);
    for(i=1;i<=w;i++)
        sum+=i*k;
    if(n>=sum)
        printf("0");
    else
        printf("%lld",sum-n);
    return 0;
}
