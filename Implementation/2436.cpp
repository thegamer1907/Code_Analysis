#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int N=240;
    N-=k;
    int i=1;
    while(N-5*i>=0&&i<=n)
    {
        N-=5*i;
        i++;
    }
    printf("%d",i-1);
    return 0;
}
