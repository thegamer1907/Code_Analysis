#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int suma[100005];
    memset(suma,-1,sizeof suma);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&suma[i]);
    }
    int k=0;
    bool band = false;
    while(suma[k]!=-1)
    {
        k +=suma[k];
        if(k == m-1)
            band = true;
    }
    (band)?printf("YES\n"):printf("NO\n");
    return 0;
}
 