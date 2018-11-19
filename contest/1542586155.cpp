#include<bits/stdc++.h>

using namespace std;

int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1==12.0)t1 = 0;
    if(t2==12.0)t2 = 0;
    if(h==12.0)h=0;
    if(t2<t1)swap(t1,t2);
    if(m>0||s>0)h+=0.5;
    if(s>0)m+=0.5;
    m/=5.0;
    s/=5.0;
    if(h>t1&&h<t2&&m>t1&&m<t2&&s>t1&&s<t2)
    {
        return cout<<"YES"<<endl,0;
    }
    if((h<t1||h>t2)&&(m<t1||m>t2)&&(s<t1||s>t2))
    {
        return cout<<"YES"<<endl,0;
    }
    cout<<"NO"<<endl;
    return 0;
}