#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double h,m,s,z,y;
ll c,d,e,f,g,b;
ll t1,t2;
int main()
{
    cin >> h >> m >> s >> t1 >> t2;
    m=(m/60)*12;
    s=(s/60)*12;
    m+=((0.2/60)*s);
    h+=(1/60.0)*m;
    if(h>12){
        h-=12;
    }
    //cout << h << " " << m << " " << s;
    y=min(h,m);
    z=max(h,m);
    if(t1>=y && t1<=z){
        c=1;
    }
    if(t2>=y && t2<=z){
        d=1;
    }
    y=min(h,s);
    z=max(h,s);
    if(t1>=y && t1<=z){
        e=1;
    }
    if(t2>=y && t2<=z){
        f=1;
    }
    y=min(m,s);
    z=max(m,s);
    if(t1>=y && t1<=z){
        g=1;
    }
    if(t2>=y && t2<=z){
        b=1;
    }
    if(c==d && e==f && g==b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
