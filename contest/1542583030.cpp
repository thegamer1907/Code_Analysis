
#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

int h,m,s,t1,t2;

bool check(int x,int y) {
    for (int i=x;i!=y;i=(i+1)%12) {
        if (i==h||i==m||i==s) return false;
    }
    return true;
}

int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h%=12;
    t1%=12;
    t2%=12;
    m/=5;
    s/=5;
    if (check(t1,t2)||check(t2,t1)) printf("YES\n");
    else printf("NO\n");
}
