#include<bits/stdc++.h>
using namespace std;
int n,m,all=0;
int main()
{
    scanf("%d%d",&n,&m);
    while(n<m)
    {
        if(m%2)
            m++;
        else
            m/=2;
        all++;
    }
    printf("%d",all+n-m);
    return 0;
}