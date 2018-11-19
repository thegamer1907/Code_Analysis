//#pragma comment(linker, "/STACK:102400000,102400000")
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
typedef long long LL;
#define mem(a, b) memset(a, b, sizeof(a))

/*

*/
/* zmy */

int mp[20];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(n == 1)
    {
        int f = 0;
        for(int i=0;i<k;i++)
        {
            int a;
            scanf("%d", &a);
            if(a) f = 1;
        }
        if(f) puts("NO");
        else puts("YES");
        return 0;
    }
    for(int i = 1; i <= n; i++)
    {
        int num = 0;
        for(int j = 1; j <= k; j++)
        {
            int a;
            scanf("%d",&a);
            num = num*2+a;
        }
        mp[num]++;
    }
    int p = 1 << k;
    int f = 0;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < p; j++){
            if(i == j && i == 0){
                if(mp[i] >= 2){
                    f = 1;
                    break;
                }
            }
            if(mp[i] && mp[j]){
                if((i&j) == 0){
                    f = 1;
                    break;
                }
            }
        }
    }
    if(f) puts("YES");
    else
        puts("NO");
    return 0;
}
