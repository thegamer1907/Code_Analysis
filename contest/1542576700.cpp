#include<bits/stdc++.h>
using namespace std;

int main(int argc,char const *argv[]) {
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2) swap(t1,t2);
    int x=m*60+s;
    int k=0;
    if(t1*5<s&&s<t2*5) k++;
    if(t1*5*60<x&&x<t2*5*60) k++;
    x=12*60*5*h+60*m+s;
    t1=t1*5*12*60;
    t2=t2*5*12*60;
    if(t1<x&&x<t2) k++;
    if(k==0||k==3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
