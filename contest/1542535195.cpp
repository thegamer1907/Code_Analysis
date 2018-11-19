#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,t1,t2,x,y,z,a,b;
    cin>>h>>m>>s>>t1>>t2;
    int f1=0,f2=0;
    x=h;
    y=m/5;
    z=s/5;
    a=max(t1,t2);
    b=min(t1,t2);
    if((x>=b&&x<a)||(y>=b&&y<a)||(z>=b&&z<a))
        f1=1;
    if((x>=0&&x<b)||(y>=0&&y<b)||(z>=0&&z<b))
        f2=1;
    else if((x>=a&&x<=12)||(y>=a&&y<=12)||(z>=a&&z<=12))
        f2=1;
    if(f1==1&&f2==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
