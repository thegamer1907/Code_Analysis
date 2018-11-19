#include <iostream>

using namespace std;

int main()
{
    int b1=0, b2=0, b3=0;
    double h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;
    h*=5;
    t1*=5;
    t2*=5;
    if(m==0)m=60;
    if(s==0)s=60;
    if(m==t1)
        m+=0.1;
    if(m==t2)
        m+=0.1;
    if(h==t1)
        h+=0.1;
    if(h==t2)
        h+=0.1;
    if(t1>t2)
    {
        if(h<=t1&&h>=t2)b1=1;
        if(m<=t1&&m>=t2)b2=1;
        if(s<=t1&&s>=t2)b3=1;
    }
    else if(t2>t1)
    {
        if(h>=t1&&h<=t2)b1=1;
        if(m>=t1&&m<=t2)b2=1;
        if(s>=t1&&s<=t2)b3=1;
    }
    if(b1==b2&&b2==b3)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}
