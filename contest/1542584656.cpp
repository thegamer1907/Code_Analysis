#include<bits/stdc++.h>
using namespace std;
int h,m,s;
int t1,t2;
double t[3];

int judge(double r){
    if(r<t[0]) return 1;
    else if(r<t[1]) return 2;
    else if(r<t[2]) return 3;
    else return 1;
}
int main()
{
    cin>>h>>m>>s;
    cin>>t1>>t2;
    t[0]=s*1.0/60*360;
    t[1]=m*1.0/60*360+s*1.0/3600*360;
    t[2]=(h%12)*1.0/12*360+m*1.0/60/12*360+s*1.0/3600/12*360;
    double rt1,rt2;
    rt1=(t1%12)*1.0/12*360;rt2=(t2%12)*1.0/12*360;
    double r1,r2,r3;
    sort(t,t+3);
    int lable1=judge(rt1),lable2=judge(rt2);
    if(lable1==lable2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
