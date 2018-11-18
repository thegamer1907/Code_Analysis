#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a,b,h,m,s,t1,t2,t,tt,c=0;
    double hh,mm,ss;
    cin>>h>>m>>s>>t1>>t2;
    ss=s/5;hh=h;
    if(ss==0)ss=12;
    if(s%5>0)ss+=.5;//cout<<ss<<" ";
        mm=m/5;
    if(mm==0)mm=12;
    if(m%5>0||s>0){mm+=.5;}if(m>0||s>0)hh=h+.5;//cout<<mm<<" "<<hh<<" ";
    //if(t1==h||t1==mm||t1==ss||t2==h||t2==mm||t2==ss){cout<<"NO";return 0;}
    tt=max(t1,t2);
    t=min(t1,t2);//cout<<t<<" "<<tt<<" ";
    if(hh>t&&hh<tt)c++;if(mm>t&&mm<tt)c++;
    if(ss>t&&ss<tt)c++;
    //cout<<c<<" ";
    if(c==0||c==3)cout<<"YES";
    else cout<<"NO";
    }
