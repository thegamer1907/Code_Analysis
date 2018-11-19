
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    t1 = t1 * 30 % 360;
    t2 = t2 * 30 % 360;
    
    double as = 6 * s,am = (s * 1.0 / 60 + m) * 6;
    double ah = 30 * (h + 1.0 * m / 60 + 1.0 * s / 3600) ;
    int t = ah / 360;ah -= t * 360;
    if(t1 > t2) swap(t1, t2);
    int cnt = 0;
    if(ah >= t1 && ah <= t2 ) cnt ++;
    if( am >= t1 && am <= t2 ) cnt ++;
    if( as >= t1 && as <= t2) cnt ++;
    
   // printf("%d %d %lf %lf %lf\n",t1,t2,ah,am,as);
    if(cnt == 0 || cnt == 3) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}