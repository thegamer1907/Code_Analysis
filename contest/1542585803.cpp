#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iomanip>
#include<cstring>
#include<ctime>
using namespace std;
double a,b,c,d1,d2,dd1,dd2;
int main()
{
    cin>>a>>b>>c>>d1>>d2;
    if(a==12)a=0;if(b==60)b=0;if(c==60)c=0;
    b+=c/60;
    c/=5;
    a+=b/60;
    b/=5;
    dd1=min(d1,d2);
    dd2=max(d1,d2);
    if(dd1-0.00001<a&&dd1-0.00001<b&&dd1-0.00001<c&&dd2+0.00001>a&&dd2+0.00001>b&&dd2+0.00001>c)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if((dd1+0.00001>a||dd2-0.00001<a)&&(dd1+0.00001>b||dd2-0.00001<b)&&(dd1+0.00001>c||dd2-0.00001<c))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}

