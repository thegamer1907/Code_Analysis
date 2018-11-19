#include <iostream>
#include<cstring>
using namespace std;

double h,m,s,t1,t2;

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    t1*=5;
    t2*=5;
    h*=5;
    m+=s/60;
    h+=m/60;
    double h1=min(min(h,m),s);
    double h3=max(max(h,m),s);
    double h2;
    if(s!=h1&&s!=h3)
        h2=s;
    else if(h!=h1&&h!=h3)
        h2=h;
    else
        h2=m;
    if(t1<=h2&&t1>=h1)
    {
        if(t2<=h2&&t2>=h1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    else if(t1>=h2&&t1<=h3)
    {
        if(t2>=h2&&t2<=h3)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    else
    {
        if(t2<=h1||t2>=h3)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}