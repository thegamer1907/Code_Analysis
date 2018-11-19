#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,t1,t2,x,y,z;
    int xx = 0;
    cin >> h >> m >> s >> t1 >> t2;
    t1 *= 5;
    t2 *= 5;
    h *= 5;
    m += s/60;
    h += m/60;
    if(t1>t2)
        swap(t1,t2);
    if(t1<h && t2>h)
        xx++;
    if(t1<m && t2>m)
        xx++;
    if(t1<s && t2>s)
        xx++;
    if(xx==0 || xx==3)
        cout << "YES\n";
    else
        cout << "NO\n";
}
