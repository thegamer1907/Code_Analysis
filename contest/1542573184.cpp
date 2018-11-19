#include<bits/stdc++.h>
using namespace std;

bool cmp(double a,double b) {
    return a<b;
}

int main()
{
    double h,m,s,t1,t2,t[3];
    int temp1,temp2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12) h=0;
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    t[0]=6*s;
    t[1]=6*m+0.1*s;
    t[2]=30*h+0.5*m+0.5/60.0*s;
    sort(t,t+3,cmp);
    //for(int i=0;i<3;i++) if(t)
    //cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
    t1*=30;t2*=30;
    if(t1>t[0]&&t1<t[1]) temp1=1;
    else if(t1>t[1]&&t1<t[2]) temp1=2;
    else temp1=3;
    if(t2>t[0]&&t2<t[1]) temp2=1;
    else if(t2>t[1]&&t2<t[2]) temp2=2;
    else temp2=3;
    //cout<<t1<<" "<<t2<<endl;
    if(temp1==temp2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
