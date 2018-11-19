#include <iostream>

using namespace std;

int main()
{
int a,h, m, s, t1, t2,ans1=1,ans2=1;
cin>>h;
cin>>m;
cin>>s;
cin>>t1;
cin>>t2;
t1=t1*5;
t2=t2*5;
h=h*5;
if(t1==t2){cout<<"YES";return 0;}
a=max(t1,t2);
t1=min(t1,t2);
t2=a;
    for(int i=t1;i<t2;i++){
        if(i==h or i==m or i==s){ans1=0;break;}
    }
    for(int i=t2;i<61;i++){
        if(i==h or i==m or i==s){ans2=0;break;}
    }
    for(int i=0;i<t1;i++){
        if(i==h or i==m or i==s){ans2=0;break;}
    }

if(ans1==0 and ans2==0)cout<<"NO"<<endl;
else cout<<"YES";
return 0;
}