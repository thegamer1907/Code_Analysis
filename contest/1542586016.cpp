#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
double _h,_m,_s,_t1,_t2,a,b;
bool ans=0;
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    _s=s*6.0;
    _m=m*6.0+s/10.0;
    _h=30.0*(h%12)+_m/12.0;
    _t1=t1*30.0;
    _t2=t2*30.0;
    b=max(_t1,_t2);
    a=min(_t1,_t2);
    if ((b>_s&&_s>a)&&(b>_m&&_m>a)&&(b>_h&&_h>a)) ans=1;
    if ((b<_s||_s<a)&&(b<_m||_m<a)&&(b<_h||_h<a)) ans=1;
    cout<<(ans?"YES":"NO")<<endl;

    return 0;
}
