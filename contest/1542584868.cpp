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
double tt1,tt2;

bool solve(double x,double y,double z)
{
    if(tt1 < tt2)
        swap(tt1,tt2);
    if( tt2<x&&x<tt1 && tt2<y&&y<tt1 && tt2<z&&z<tt1)
        return true;
    if( (!(tt2<x&&x<tt1)) && (!(tt2<y&&y<tt1)) && (!(tt2<z&&z<tt1)))
        return true;
    return false;
}
int main()
{
    int h,m,s;
    int t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    double hh,mm,ss;
    hh = mm = ss;
    ss = s*1.0/60*360;
    mm = (m*1.0+s*1.0/60)/60*360;
    if(mm >= 360) mm -= 360;
    hh = (h*1.0+m*1.0/60+s*1.0/3600)/12*360;
    if(hh >= 360) hh -= 360;
    tt1 = t1*1.0/12*360;
    tt2 = t2*1.0/12*360;
//    printf("%f %f\n",tt1,tt2);
//    printf("%f %f %f\n",ss,hh,mm);
    if(solve(ss,mm,hh))
        puts("YES");
    else
        puts("NO");

    return 0;
}
