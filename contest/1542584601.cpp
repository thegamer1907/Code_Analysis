#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,a,b,f,i,da,db;
    double dh,dm,ds;
    cin >> h >> m >> s >> a >> b;
    ds=6*s,dm=s,dm/=10,dm+=(6*m);
    dh=s,dh/=60,dh+=m,dh/=2,dh+=(30*(h%12));
    da=30*(a%12),db=30*(b%12);
    a=min(da,db),b=max(da,db);
    vector<double> v;
    v.push_back(ds);
    v.push_back(dm);
    v.push_back(dh);
    sort(v.begin(),v.end());
    f=0;
    if(a>=v[0] && b<=v[1])
        f=1;
    if(a>=v[1] && b<=v[2])
        f=1;
    else
    {
        if(b<=v[0] && a>=0)
            f=1;
        if(a>=v[2] && b<=360)
            f=1;
        if(a<=v[0] && b>=v[2])
            f=1;
    }
    if(f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
