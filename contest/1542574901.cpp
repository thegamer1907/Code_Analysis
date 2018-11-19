#include <bits/stdc++.h>
using namespace std;
bool myfunction (double i,double j) { return (i<j); }
int main() {
    int h,m,s;
    double t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    double hh=h,mm = (m*1.0),ss= (s*1.0);
        hh= (hh + mm/60.0 + ss/3600.0)*5;
        mm = (mm + (ss*1.0)/60);
    t1*=5;
    t2*=5;
    if(hh>60)
        hh-=60;
    if(mm>60)
        mm-=60;
    if(ss>60)
        ss-=60;
    double t[3];
    t[0]=hh;
    t[1]=ss;
    t[2]=mm;
    sort(t,t+3,myfunction);
        //cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<" "<<t1<<t2;
    int ans=0;
    double mn = t[0];
    double mx= t[2];
    double md= t[1];
    if(t1>mx&&(t2>mx||t2<mn)){
        ans=1;
    }
    if(t1<mn&&(t2<mn||t2>mx)){
        ans=1;
    }
    if(t1<mx&&t2<mx&&t1>md&&t2>md)
        ans=1;
    if(t1<md&&t2<md&&t1>mn&&t2>mn)
        ans=1;
    if(ans)
        cout<<"yes";
    else
        cout<<"no";
	// your code goes here
	return 0;
}