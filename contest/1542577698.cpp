#include<bits/stdc++.h>
using namespace std;
int main()
{

    double h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    //t1<t2
    if(t1>t2)
        swap(t1,t2);
    //if((h<t2 && h>t1) ||(m<t2*5 && m>t1*5) ||(s<t2*5 && s>t1*5))
   // {
   //     flag1==1;
   // }
   //cout << t1 << " " << t2 << endl;
    if(((h+m/60+s/3600)>=t2 || (h+m/60+s/3600)<=t1)&&((m+s/60)>=t2*5 || (m+s/60)<=t1*5)&&(s>=t2*5 ||s<=t1*5))
    {
        cout << "YES" << endl;
        return 0;
    }
    if((h+m/60+s/3600<=t2 && h+m/60+s/3600>=t1) &&(m+s/60<=t2*5 && m+s/60>=t1*5) &&(s<=t2*5 && s>=t1*5))
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}

