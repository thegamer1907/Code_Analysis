#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <sstream>
#include <vector>
#define PI acos(-1.0)
#define N 111111
#define M 1000000007
#define inf 2e9
#define eps 1e-8
#define dazhi 2147483647
using namespace std;

typedef long long ll;


/****************************************/


int main()
{
    int n;
    char a,b,gg[5];
    scanf("%c%c",&a,&b);
    scanf("%d",&n);
    int flag1=0,flag2=0;
    while(n--){
        scanf("%s",gg);
        if(gg[0]==b)flag1=1;
        if(gg[1]==a)flag2=1;
        if(gg[0]==a&&gg[1]==b)flag1=1,flag2=1;
    }
    if(flag1&&flag2)puts("YES");
    else puts("NO");
}

