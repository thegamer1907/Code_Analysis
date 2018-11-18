#include<cstdio>
#include<cmath>
#include<deque>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX = 1e5 + 10;
const int INF = 1e9 + 7;
typedef long long LL;
bool sf(double x,double y,double z){
    if(z <= x || z >= y)
        return true;
    return false;
}
int main()
{
    double h,m,s,h1,h2;
    scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&h1,&h2);
    m += s / 60,h += m / 60;
    double ma = m / 5,ms = s / 5;
    if(h1 > h2) swap(h1,h2);
    if(sf(h1,h2,h) && sf(h1,h2,ma) && sf(h1,h2,ms)){
        puts("YES");
        return 0;
    }
    if(h1 < h2) h1 += 12;
    double x = h + 12,y = ma + 12,z = ms + 12;
    if(sf(h2,h1,x) && sf(h2,h1,y) && sf(h2,h1,z) && sf(h2,h1,h) && sf(h2,h1,ma) && sf(h2,h1,ms)){
        puts("YES");
        return 0;
    }
    puts("NO");
    return 0;
}