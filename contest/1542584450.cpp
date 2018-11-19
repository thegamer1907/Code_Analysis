#include <bits/stdc++.h>
using namespace std;

int main() {
    double h,m,s,t1,t2,as,am,ah,at1,at2,b[5];
    int f,i;
cin>>h>>m>>s>>t1>>t2;
    if(h==12)
    h=0;
    as=s*6;
    am=(m+s/60)*6;
    ah=(h+m/60+s/3600)*30;
    at1=t1*30;
    at2=t2*30;
    if(at1>at2)
        swap(at1,at2);
    b[0]=as,b[1]=am,b[2]=ah,b[3]=at1,b[4]=at2;
    sort(b,b+5);
    f=0;
    for(i=0;i<4;i++)
    {
        if(b[i]==at1 && b[i+1]==at2)
            f=1;
     }
    if(b[0]==at1 && b[4]==at2)
        f=1;
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
    return 0;
}