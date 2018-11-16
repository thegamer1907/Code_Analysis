#include <iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<deque>
#include<queue>
#include<vector>
#include<stack>
#include<ctime>
using namespace std;
#define eps 1e-10
#define INF 0x3f3f3f3f
typedef long long LL;
int main()
{
    int n,m,i,j;
    char a[10001];
    scanf("%d%d",&n,&m);
    scanf(" %s",a);

    int x=strlen(a);
    for( i=0; i<m; i++)
    {
        for(j=0; j<x-1; j++)
        {
            if(a[j]<a[j+1])
            {
                char t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                 j++;
            }
        }
    }
    puts(a);
    return 0;
}