#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s,t1,t2,flagh=0,flagm=0,flags=0;
    cin>>h>>m>>s>>t1>>t2;

    if(h==12)
        h=0;
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;

    h*=5;
    t1*=5;
    t2*=5;

    int i=t1,j=t2;
    while(i!=j)
    {
        if(i==j)
            break;
        if(i==h)
            flagh=1;
        if(i==m)
            flagm=1;
        if(i==s)
            flags=1;
        i++;
        i%=60;
    }

    if((flagh && flagm && flags) || (!flagh && !flagm && !flags))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
