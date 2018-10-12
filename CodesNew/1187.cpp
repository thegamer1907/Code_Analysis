#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <set>
#include <climits>
#include <cmath>
#include <map>
#include <unordered_map>
using namespace std;
const int N=1e6+5;
int num[N];
int res[N];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&num[i]);

    for(int i=1;i<=n;i++)
    {
        res[i]=(num[i]-i+n)/n;
    }
/*
    for(int i=1;i<=n;i++)
        printf("%d ",res[i]);
    printf("\n");
*/
    int maxx=INT_MAX;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(maxx>res[i])
        {
            ans=i;
            maxx=res[i];
        }
    }
    printf("%d\n",ans);
    //cout << "Hello world!" << endl;
    return 0;
}
