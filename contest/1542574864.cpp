#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t1,t2,h,m,s,c=0;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2)
        swap(t1,t2);
    if(h*3600 + m*60 + s>t1*3600 && h*3600 + m*60 + s<t2*3600)
        c++;
    if(s>t1*5 && s<t2*5)
        c++;
    if(m*720+s>t1*3600 && m*720+s<t2*3600)
        c++;
    if(c==0 || c== 3)
        cout<<"YES";
    else
        cout<<"NO";
}
