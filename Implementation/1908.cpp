#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x[105],y[105],z[105],sumX=0,sumY=0,sumZ=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &x[i],&y[i],&z[i]);
        sumX += x[i];
        sumY += y[i];
        sumZ += z[i];
    }
    if(sumX==0 && sumY==0 && sumZ==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

