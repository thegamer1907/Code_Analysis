#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int a[20];
int s[20];
int main()
{
    int n, k, A, flag=0, cnt=0;
    scanf("%d%d", &n, &k);
    while(n--)
    {
        int sum=0;
        for(int i=k-1; i>=0; i--)
        {
            scanf("%d", &A);
            sum+=A*pow(2, i);
        }
        a[sum]++;
        if(a[0]) flag=1;
    }
    for(int i=0; i<=16; i++)
        if(a[i]) s[cnt++]=i;

    for(int i=0; i<cnt-1; i++)
        for(int j=i+1; j<cnt; j++)
            if((s[i]&s[j])==0) flag=1;

    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
