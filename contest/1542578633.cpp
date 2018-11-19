#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,t1,t2;
    while(cin>> h >> m >> s >> t1 >> t2){
        h*=5.0,t1*=5.0,t2*=5.0;
        m+=s/60.0;
        h+=m/60.0;
        if(m>60.0) m-=60.0;
        if(h>60.0) h-=60.0;
        double m1=t1,m2=t2;
        t1=max(m1,m2),t2=min(m1,m2);
        bool b1,b2,b3,ok=false;
        b1=(s<t1 && s>t2);
        b2=(m<t1 && m>t2);
        b3=(h<t1 && h>t2);
        if(b1 && b2 && b3) ok=true;
        if(!(b1 || b2 || b3)) ok=true;
        if(ok) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}