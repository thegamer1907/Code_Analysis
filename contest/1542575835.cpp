#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t1,t2,h,m,s;
    cin>>h>>m>>s>>t1>>t2;

    double hc,mc,sc;
    double t1c,t2c;

    t1c = t1*30.0;
    t2c = t2*30.0;

    sc = s*6.0;
    mc = m*6.0 + 0.1*s;
    hc = h*30.0 + 0.5*m + (0.5/60.0)*s;
    double val[3];
    val[0]=sc;val[1]=mc;val[2]=hc;
    sort(val,val+3);
    int p1 = lower_bound(val,val+3,t1c)-val;
    int p2 = lower_bound(val,val+3,t2c)-val;
    //cout<<val[0]<<" "<<val[1]<<" "<<val[2]<<endl;
    //cout<<p1<<" "<<p2<<endl;
    if(p1==p2||p1-3==p2||p1==p2-3)
        return cout<<"YES",0;
    else return cout<<"NO",0;

}
