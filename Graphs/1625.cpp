#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    scanf("%d %d", &n, &t);
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d", &a[i]);
    }
    int z=0;
    while(z < t-1)
    {
        z += a[z];
    }
    if(z == t-1)
        return 0*puts("YES");
    puts("NO");

    return 0;
}
