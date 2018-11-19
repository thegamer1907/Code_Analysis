#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    float a,b,c,x,y;
    a=((h%12)*30 +m/2.0+s/120.0);
    b=(6*m+s/10.0);
    c=6*s;   
    x=(t1%12)*30;
    y=(t2%12)*30;
    float time[3];
    time[0]=a;
    time[1]=b;
    time[2]=c;
    sort(time,time+3);
    auto z=upper_bound(time,time+3,min(x,y))-time;
    if(z>2)
        cout<<"YES";
    else if(time[z]>=max(x,y))
        cout<<"YES";
    else{
        if(time[0]>=min(x,y)  && time[2]<=max(x,y))
            cout<<"YES";
        else
            cout<<"NO";
    }
}