#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2,t,f1=0,f2=0,f3=0;
    cin>>h>>m>>s>>t1>>t2;
    t1--,t2--,h--;
    for(t=t1;t!=t2;t=(t+1)%12)
    if(t==h){f1=1; break;}
    t1++,t2++;
    for(t=5*(t1%12);t!=5*(t2%12);t=(t+1)%60)
    if(t==m){f2=1; break;}
    for(t=5*(t1%12);t!=5*(t2%12);t=(t+1)%60)
    if(t==s){f3=1; break;}
    if((f1+f2+f3==0)||(f1+f2+f3==3))cout<<"YES";
    else cout<<"NO";



}
