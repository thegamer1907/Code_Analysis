#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double h,m,s,t1,t2;
    long double a[10];
    long double hs=360.0/12/60/60,ms=360.0/60/60,ss=360.0/60;
    while (cin>>h){
       cin>>m>>s>>t1>>t2;
       if (h==12) h=0;
       a[0]=h*30+hs*(m*60+s);
       a[1]=ms*(m*60+s);
       a[2]=ss*s;
       sort(a,a+3);
       a[3]=a[0]+360;
       int flag=0;
       if (t1==12) t1=0;
       if (t2==12) t2=0;
       t1=t1*30;
       t2=t2*30;
       for (int i=0;i<3;i++){
         if (t1>a[i] && t1<a[i+1]  && t2>a[i] && t2<a[i+1]) flag=1;
       }
       if (t1>=0 && t1<a[0] && t2>=0 && t2<a[0]) flag=1;
       if (t1>=0 && t1<a[0] && t2>a[2]) flag=1;
       if (t2>=0 && t2<a[0] && t1>a[2]) flag=1;
       if (flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
