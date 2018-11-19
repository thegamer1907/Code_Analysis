#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,m,s,t1,t2;
    double hp,mp,sp,t1p,t2p;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    hp=(double)(h%12)*5.0+(double)m*(5.0/60.0)+(double)s*(5.0/(60.0*60.0));
    if(hp>=60.0)    hp-=60.0;
    mp=(double)m+(double)s*(1.0/60.0);
    if(mp>=60.0)    mp-=60.0;
    sp=(double)s;
    t1p=(double)(t1%12)*5.0;
    t2p=(double)(t2%12)*5.0;
//    printf("hp:%lf, mp:%lf, sp:%lf, t1p:%lf, t2p:%lf\n",hp,mp,sp,t1p,t2p);
    bool yes=false;
    if(t1p>t2p){
        if((hp>t2p&&hp<t1p)&&(mp>t2p&&mp<t1p)&&(sp>t2p&&sp<t1p))    yes=true;
        else if((hp>t1p||hp<t2p)&&(mp>t1p||mp<t2p)&&(sp>t1p||sp<t2p))    yes=true;
    }
    else{
        if((hp>t1p&&hp<t2p)&&(mp>t1p&&mp<t2p)&&(sp>t1p&&sp<t2p))    yes=true;
        else if((hp>t2p||hp<t1p)&&(mp>t2p||mp<t1p)&&(sp>t2p||sp<t1p))    yes=true;
    }
    if(yes) printf("YES\n");
    else    printf("NO\n");
    return 0;
}

