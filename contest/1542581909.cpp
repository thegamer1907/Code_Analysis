#include<bits/stdc++.h>
using namespace std;
int judge(double a,double b,double c)
{
    if(a==c||b==c)
        return -100;
    if(a<c&&b>c)
    {
        return 1;
    }
    if(a>c&&b<c)
        return 1;
    else return 0;
}
int main()
{
    int h,m,s,t1,t2,flag=0;
    double ht,mt,st,t11,t22;
    cin>>h>>m>>s;
    cin>>t1>>t2;
    ht=h*30.0+m/60.0*30.0+s/3600.0*30.0;
    if(ht>=360.0)
        ht-=360;
    mt=m*6.0+s/60.0*6.0;
    if(mt>=360.0)
        mt-=360;
    st=s*6.0;
    if(st>=360.0)
        st-=360;
    t11=t1*30.0;
    t22=t2*30.0;
    //cout<<ht<<" "<<mt<<" "<<st<<endl;
    if(abs(judge(t11,t22,ht)-judge(t11,t22,mt))==1)
    {
        flag=1;
    }
    if(abs(judge(t11,t22,st)-judge(t11,t22,mt))==1)
    {
        flag=1;
    }
    if(abs(judge(t11,t22,ht)-judge(t11,t22,st))==1)
    {
        flag=1;
    }
    if(!flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
