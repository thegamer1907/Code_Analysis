#include <bits/stdc++.h>
using namespace std;

bool check(int a,int b,int t)
{
    return (a<t&&t<=b);
}
int main()
{
    int h,m,s;
    cin>>h>>m>>s;
    h=h%12;
    h=h*5;
    int a[]={h,m,s};
    sort(a,a+3);
    //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    int t1,t2;
    cin>>t1>>t2;
    t1=t1%12;
    t2=t2%12;
    t1=t1*5;
    t2=t2*5;
    bool posi=false;
    if(check(a[0],a[1],t1)&&check(a[0],a[1],t2))
        posi=true;
    if(check(a[1],a[2],t1)&&check(a[1],a[2],t2))
        posi=true;
    if(t1>a[2]||t1<=a[0])
        if(t2>a[2]||t2<=a[0])
            posi=true;
    if(posi)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
