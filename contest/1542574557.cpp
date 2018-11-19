#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    float gio,phut,giay;
    long t1,t2;
    float a[3];
    cin>>gio>>phut>>giay>>t1>>t2;
    a[0]=giay/5;
    a[1]=phut/5+ giay/300 ;
    a[2]= gio + a[1]/12 ;
    long dem=0;
    if (t1>t2) swap (t1,t2);
    for (long i=0;i<3;++i)
        if (a[i]<t2 && a[i]>t1)
        ++dem;
    if (dem==3 || dem==0) cout<<"YES";
    else cout<<"NO";
}
