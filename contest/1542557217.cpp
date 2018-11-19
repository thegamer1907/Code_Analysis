#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    bool flag=false;
    double d[3];
    d[0]=h+((m+(s/60.00))/60.00);
    d[1]=(m+(s/60.00))/5.00;
    d[2]=s/5.00;
    sort(d,d+3);
    if(t1>d[0]&&t1<d[1]&&t2>d[0]&&t2<d[1]) flag=true;
    if(t1>d[1]&&t1<d[2]&&t2>d[1]&&t2<d[2]) flag=true;
    if(t1<d[0]) t1+=12.00;
    if(t2<d[0]) t2+=12.00;
    d[0]+=12.00;
    if(t1>d[2]&&t1<d[0]&&t2>d[2]&&t2<d[0]) flag=true;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
