#include<bits/stdc++.h>

using namespace std;

int main()
{
    double h,m,s,t1,t2,counter=0;
    cin>>h>>m>>s>>t1>>t2;
    h*=5;
    t1*=5;
    t2*=5;
    m+=s/60;
    h+=m/12;
    if(t1>t2)
    {
        swap(t1,t2);
    }
    if(h>t1 && h<t2)
    {
        counter++;
    }
    if(m>t1 && m<t2 )
    {
        counter++;
    }
    if(s>t1 && s<t2)
    {
        counter++;
    }
    if(counter==0 || counter==3)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
}
