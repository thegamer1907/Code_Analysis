#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    bool path1=true,path2=true;
    h*=5;
    h=h%60;
    t1*=5;
    t1=t1%60;
    t2*=5;
    t2=t2%60;
    if(max(t1,t2)>s && min(t2,t1)<s) path1=false;
    if(max(t1,t2)<s || min(t2,t1)>s) path2=false;
    if(max(t1,t2)>m && min(t2,t1)<=m) path1=false;
    if(max(t1,t2)<=m || min(t2,t1)>m) path2=false;
    if(max(t1,t2)>h && min(t2,t1)<=h) path1=false;
    if(max(t1,t2)<=h || min(t2,t1)>h) path2=false;
    if(path1 || path2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
