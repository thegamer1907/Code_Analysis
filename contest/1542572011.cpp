#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    ll f1=0,f2=0,f3=0;
    ll p1=t1*5;
    ll p2=t2*5;
    if( h==12)
    {
        h=0;
    }
    if (t1==12)
    {

        t1=0;
    }
    if(t2==12)
    {

        t2=0;
    }

    if(p1==60)
    {
        p1=0;
    }
    if(p2==60)
    {
        p2=0;
    }
    ll ff=0;
    if (h==min(t1,t2))
    {
        if(m==0 && s==0)
        {
            ff=1;
        }
        else
        {

            ff=2;
        }
    }
    ll ff2=0;
    if (m==min(p1,p2))
    {
        if(s==0)
        {
            ff2=1;
        }
        else
        {

            ff2=2;
        }
    }
    if(h>min(t1,t2) && h <max(t1,t2) || ff==2)
    {
        f1=1;
    }
   if(m>min(p1,p2) && m <max(p1,p2) || ff2==2)
    {
        f2=1;
    }
     if(s>min(p1,p2) && s <max(p1,p2))
    {
        f3=1;
    }
    if ((f1==1 && f2==1 && f3==1) || (f1==0 && f2==0 && f3==0) )
    {
       cout << "YES" << endl;
       return 0;
    }
    if(ff==1 || ((m==p1 || m==p2)&&(s==p1 || s==p2)))
    {
         cout << "YES" << endl;
       return 0;
    }
    if(  ((ff2==1)&& (f1==f3)) || (s==p1 || s==p2 )&& (f1==f2) )
    {
        cout << "YES" << endl;
        return 0;
    }


        cout << "NO"  << endl;

    return 0;
}
