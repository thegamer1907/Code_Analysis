#include <iostream>

using namespace std;

int main()
{
    double h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2)
  {
        h = h*5;
        m += (s/60);
        h += (m/60);
        t1 = t1*5;
        t2 = t2*5;
        while(t1 >= 60) t1 -=60;
        while(t2 >= 60) t2 -=60;
        while(s >= 60) s -=60;
        while(m >= 60) m -=60;
        while(h >= 60) h -=60;

        int x = 0,y = 0;
        if(t1 > t2) swap(t1,t2);
        if( h > t1 && h > t2)
        {
            x = 1;
        }
        if(h < t1 && h < t2)
        {
            x = 1;
        }
        if( m > t1 && m > t2)
        {
            x = 1;
        }
        if(m < t1 && m < t2)
        {
            x = 1;
        }
        if( s > t1 && s > t2)
        {
            x = 1;
        }
        if(s < t1 && s < t2)
        {
            x = 1;
        }
        if(h > t1 && h < t2)
        {
            y = 1;
        }
        if(m > t1 && m < t2)
        {
            y = 1;
        }
        if(s > t1 && s < t2)
        {
            y = 1;
        }
        if( x == 1 && y == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
          cout<<"YES"<<endl;
        }
    }
    return 0;
}
