#include <iostream>
#include"string.h"
#include"cstdio"
#include"stdlib.h"
#include"algorithm"
using namespace std;
const int N = 500005;
int a[N];


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int mid=(n-1)/2;
        int big=n-1;
        int small=mid;
        int ok=0;
        while(big>mid&&small>=0)
        {
            if(a[small]*2<=a[big])
            {
                ok++;
                small--;
                big--;
            }
            else
            {
                small--;
            }
        }
        printf("%d\n",n-ok);
    }
}