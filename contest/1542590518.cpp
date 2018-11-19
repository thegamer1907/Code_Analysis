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

int main()
{
    char n,m;
    scanf("%c%c",&n,&m);
    int x;
    scanf("%d",&x);
    getchar();
    char a,b;
    int f1=0,f2=0;
    for(int i = 1; i <= x; i++){
        scanf("%c%c",&a,&b);
        getchar();
        if(a == n && b == m)
        {
            f1 = 1;
            f2 = 1;
        }
        if(a == m)
            f1 = 1;
        if(b == n)
            f2 = 1;
    }
    if(f1 && f2)
        puts("YES");
    else
        puts("NO");
    return 0;
}
