#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n=0,eq=0;
    float h,m,s;
    int t,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h+=m/60;
    h+=s/3600;
    m/=5;
    s/=5;
    m+=s/60;
    if(m==0)
        m=12;
    if(s==0)
        s=12;
    if(t2<t1)
    {
        t=t1;
        t1=t2;
        t2=t;
    }

    if(h>t1&&h<t2)
        n++;
    if(m>t1&&m<t2)
        n++;
    if(s>t1&&s<t2)
        n++;
    if(h==t1||h==t2)
        eq++;
    if(m==t1||m==t2)
        eq++;
    if(s==t1||s==t2)
        eq++;
    if(n==0||n==3||eq==2)
        cout<<"YES";
    else if(eq==1&&n==2)
        cout<<"YES";
    else if(eq==1&&n==0)
        cout<<"YES";
    else
        cout<<"NO";
    //cout<<endl<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<" "<<n<<" "<<eq;

    return 0;
}
