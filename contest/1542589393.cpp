#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<utility>
#include<algorithm>
#include<map>
#include<stack>
#include<set>
#include<queue>
using namespace std;
typedef long long ll;
const int maxn = 1000;
const int mod = 1e9+7;
const int Hash = 10000;
const int INF = 1<<30;
const ll llINF = 1e18+999;

char first[100], second[100], a, b;
int n, flag;
int main( )
{
    //freopen("input.txt", "r", stdin);
    while(~scanf("%c%c",&a,&b))
    {
        flag = 0;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            getchar( );
            scanf("%c%c", first+i, second+i);
            if(first[i]==a && second[i]==b)
                flag = 1;
        }
        getchar( );
        for(int i=0; i<n; i++)
            if(second[i] == a)
                for(int j=0; j<n; j++)
                    if(first[j] == b)
                        flag = 1;
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
