#include<bits/stdc++.h>
using namespace std;
int t[3],t1,t2;
int mark[18000];
int main(){
    cin>>t[0]>>t[1]>>t[2]>>t1>>t2;
    t1=t1%12*1500;
    t2=t2%12*1500;
    t[0]%=12;
    t[2]=t[2]*300;
    t[1]=t[1]*300+t[2]/60;
    t[0]=t[0]*1500+t[1]/60+t[2]/300;
    sort(t,t+3);
    for(int i=t[0];i<t[1];i++) mark[i]=1;
    for(int i=t[1];i<t[2];i++) mark[i]=2;
    for(int i=t[2];i<18000;i++) mark[i]=3;
    for(int i=0;i<t[0];i++) mark[i]=3;
    if(mark[t1]==mark[t2] ) cout<<"YES";
    else if(mark[t1]==(mark[t2]+1)%3 && mark[(18000+t1-1)%18000]==mark[t2] || mark[t2]==(mark[t1]+1)%3 && mark[(18000+t2-1)%18000]==mark[t1]) cout<<"YES";
    else cout<<"NO";
    return 0;
}
