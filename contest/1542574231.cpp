#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h1, m1,s1;
    double h2, m2,s2;
    double h,m,s;
    double t1,t2;
    while(scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2)==5){
    h1 = h + m/60.0 + s/3600.0;
    m1 = ((m/60.0)*12.0) + (s/3600.0)*12.0;
    s1 = (s/60.0)*12.0;
//    int h1 = ceil(pos_h);
//    int m1 = ceil(pos_m);
//    int s1 = ceil(pos_s);
//    printf("%lf %lf %lf",pos_h, pos_m,pos_s);

    if(h1>12.0) h2 = h1 - 12.0;
    else h2 = h1;
    if(m1>12.0) m2 = m1 - 12.0;
    else m2 = m1;
    if(s1>12.0) s2 = s1 - 12.0;
    else s2 = s1;

    if(h1<1.0) h2 = h1 + 12.0;
    if(m1<1.0) m2 = m1 + 12.0;
    if(s1<1.0) s2 = s1 + 12.0;
    bool yes = 1, res = 0;
//    printf(" h1 = %lf h2 = %lf m1 = %lf m2 = %lf s1 = %lf s2 = %lf\n",h1,h2,m1,m2,s1,s2);
    for(double i=t1; ; i++)
    {
        if(i==13.0) i =1.0;
        if(i==0.0) i =12.0;
        if(i==t2) break;
        double s = i;
        double e = i+1.0;
        if(s>e) swap(s,e);
//        printf("s = %lf e = %lf h1 = %lf\n",s,e,h1);
        if((s<=h1 && h1<=e) || (s<=h2 && h2<=e) || (s<=m1 && m1<=e) || (s<=m2 && m2<=e) || (s<=s1 && s1<=e) || (s<=s2 && s2<=e))
            {yes = 0;}
        if(e==13.0) e =1.0;
        if(e==0.0) e =12.0;
    }
    if(yes) res =1;
    yes = 1;
    for(double i=t1; ; i--)
    {
        if(i==13.0) i =1.0;
        if(i==0.0) i =12.0;

        if(i==t2) break;
        double s = i;
        double e = i-1.0;

        if(s>e) swap(s,e);
        if((s<=h1 && h1<=e) || (s<=h2 && h2<=e) || (s<=m1 && m1<=e) || (s<=m2 && m2<=e) || (s<=s1 && s1<=e) || (s<=s2 && s2<=e))
            {yes = 0;}
        if(e==13.0) e =1.0;
        if(e==0.0) e =12.0;

    }
    if(yes) res = 1;
    if(res) cout << "YES" << endl;
    else cout<< "NO" << endl;
    }
}

