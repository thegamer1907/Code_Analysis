#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[3],t1,t2;
    while(cin>>a[0]>>a[1]>>a[2]>>t1>>t2)
    {
        a[1]=a[1]+(a[2]/60);
        if(a[0]==12)
            a[0]=0;
        else
            a[0]*=5;
        a[0]+=(a[1]/60);
        sort(a,a+3);
        t1*=5;
        t2*=5;
        if(t1>t2)
            swap(t1,t2);
        int f=0;
        if((t1>a[2]&&t2>a[2])||(t1<a[0]&&t2<a[0]||(t1<a[0]&&t2>a[2])||(t2<a[2]&&t1>a[1])||(t2<a[1]&&t1>a[0])))
           f=1;
        (f)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
