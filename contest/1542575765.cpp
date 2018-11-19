//5 40 24 8 1
//1 58 43 12 1 yes
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    double h,m,s;
    double t1,t2,tt1,tt2;
    cin >> h >> m >> s >> tt1 >> tt2;
    if(tt1==12) tt1=0;
    if(tt2==12) tt2=0;
    h=h+1.0*(m+1.0*s/60)/60;
    if(h>12)
        h-=12;
    //m=1.0*m/5+1.0*s/60'
    m=1.0*m/5+1.0*s/600;
    s=1.0*s/5;
    t1=min(tt1,tt2);
    t2=max(tt1,tt2);
    bool ok1=false;
    //cout << h << " " << m << " " << s << " " << t1 << " " << t2 << endl;
    if((h>t1&&h<t2)||(m>t1&&m<t2)||(s>t1&&s<t2))
    {
        if(h<t1||m<t1||s<t1)
        {
            //cout << 2 << endl;
            cout << "NO" << endl;
            return 0;
        }
        if(h>t2||m>t2||s>t2)
        {
            //cout << 3 << endl;
            cout << "NO" << endl;
            return 0;
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "YES" << endl;
        return 0;
    }
    return 0;
}
