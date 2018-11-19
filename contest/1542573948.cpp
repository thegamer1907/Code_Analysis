#include<bits/stdc++.h>
using namespace std;
string ax,bx;
map<string,bool> ac;

int main()
{
     int h,m,s,t1,t2;
     cin>>h>>m>>s>>t1>>t2;
     if(h==12)
        h=0;
     if(t1==12)
        t1=0;
     if(t2==12)
        t2=0;
     if(t1>t2)
     {
         int temp=t1;
         t1=t2;
         t2=temp;
     }
     double h1=h+(m*1.0*60+s)*1.0/3600;
     double m1=12*1.0*(m*1.0*60+s)*1.0/3600;
     double s1=12*1.0*s*1.0/60;
     int flag=1,flag2=1;
     if(t1<h1&&t2>h1)
        flag=0;
     else
         flag2=0;
     if(t1<m1&&t2>m1)
        flag=0;
     else
        flag2=0;
     if(t1<s1&&t2>s1)
        flag=0;
     else flag2=0;
     //cout<<h1<<" "<<m1<<" "<<s1<<endl;
     if(flag||flag2)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
    return 0;
}
