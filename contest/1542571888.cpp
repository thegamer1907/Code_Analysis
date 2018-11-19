#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,t1,t2,cnt=0;
    double m,s;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2) swap(t1,t2);
    //m=m/5;s=s/5;
    double hh=(double)h*1.0;
    m+=s/60;
    hh+=(double)m/60.0;
    m=m/5;
    s=s/5;
    //cout<<hh<<endl<<m<<endl<<s<<endl<<t1<<endl<<t2<<endl;
    if(hh>=12)h-=12;
    if(hh>=t1&&hh<=t2)
       cnt++;
    if(m>=t1&&m<=t2)
        cnt++;
    if((s>=t1&&s<=t2))
        cnt++;
    if(cnt==3||cnt==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
