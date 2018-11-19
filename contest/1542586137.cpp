#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
const long long mod=1e9+7;
const double eps=1e-8;
int n;
double h,s,t,t1,t2;
int main()
{
    cin>>h>>s>>t>>t1>>t2;
    if (h==12) h=0;
    if (s==60) s=0;
    if (t==60) t=0;
    if (t1==12) t1=0;
    if (t2==12) t2=0;
    double ang1=30*h+(60*s+t)/3600*30;
    double ang2=s*6+t/10;
    double ang3=t*6;
    double b=t1*30;
    double c=t2*30;
    h=ang1;
    s=ang2;
    t=ang3;
    vector<double> clo;
    clo.push_back(h);clo.push_back(s);clo.push_back(t);
    sort(clo.begin(),clo.end());
    h=clo[0]; s=clo[1]; t=clo[2];
    if (b>=h&&b<=s&&c>=h&&c<=s)
    {
        cout<<"YES\n";return 0;
    }
    if (b>=s&&b<=t&&c>=s&&c<=t)
    {
        cout<<"YES\n";
        return 0;
    }
    if ((b>=t||b<=h)&&(c>=t||c<=h))
    {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
