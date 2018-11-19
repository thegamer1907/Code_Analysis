#include <bits/stdc++.h>

using namespace std;
int h,m,s,t1,t2;
double ph,pm,ps;
int main()
{
    //freopen("de.txt","r",stdin);
    cin>>h>>m>>s>>t1>>t2;
    if (h==12) h-=12;
    if (t1==12) t1=0;
    if (t2==12) t2=0;
    t1*=5;
    t2*=5;
    ph = (double)h*5+(double)((double)m*60+(double)s)/3600;
    pm = (double)m+(double)s/60;
    ps = (double)s;
    //printf("%.6f %.6f %.6f \n",ph,pm,ps);
    vector <double > v;
    v.push_back(ph);
    v.push_back(pm);
    v.push_back(ps);
    sort(v.begin(),v.end());
    if (t1==s||t2==s){
        printf("NO\n");
        return 0;
    }
    int s1 = -1;int s2 = -1;
    if ((double)t1<v[0]) s1 = 3;
    if (v[0]<(double)t1&&(double)t1<v[1]) s1 = 1;
    if (v[1]<(double)t1&&(double)t1<v[2]) s1 = 2;
    if (t1>v[2]) s1 = 3;

    if ((double)t2<v[0]) s2 = 3;
    if (v[0]<(double)t2&&(double)t2<v[1]) s2 = 1;
    if (v[1]<(double)t2&&(double)t2<v[2]) s2 = 2;
    if ((double)t2>v[2]) s2 = 3;

    //printf("%d %d %d %d\n",t1,t2,s1,s2);
    if (s1==s2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}