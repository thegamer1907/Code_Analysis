#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn=100000+100;
int h,m,s,t1,t2;
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    long double ss=s*6.0;
    long double mm=(m+s/60.0)*6.0;
    long double hh=(mm/360.0+h)*30.0;
    long double tt1=t1*30.0;
    long double tt2=t2*30.0;
    if(tt1>tt2)
        swap(tt1,tt2);
    if((ss>=tt1&&ss<=tt2)&&(mm>=tt1&&mm<=tt2)&&(hh>=tt1&&hh<=tt2))
        cout<<"YES"<<endl;
    else if((ss<=tt1||ss>=tt2)&&(mm<=tt1||mm>=tt2)&&(hh<=tt1||hh>=tt2))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
