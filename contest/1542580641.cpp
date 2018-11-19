#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;
int main()
{
    float a[4],h,m,s,t1,t2;
    cin>>a[0]>>a[1]>>a[2]>>t1>>t2;
    t1*=5;
    t2*=5;
    a[0]*=5;
    a[0]=a[0]+a[1]/12+a[2]/720;
    a[1]+=a[2]/60;
    if(a[0]>=60)
        a[0]-=60;
    sort(a,a+3);
    h=a[0];
    m=a[1];
    s=a[2];
    if(t1==60)
        t1=0;
    if(t2==60)
        t2=0;
    //cout<<h<<" "<<m<<" "<<s<<" ";
    if(t1>=h&&t2>=h&&t1<=m&&t2<=m)
        cout<<"YES";
    else if(t1>=m&&t2>=m&&t1<=s&&t2<=s)
        cout<<"YES";
    else if(((t1>=s&&t1<=60)||(t1<=h&&t1>=0))&&((t2>=s&&t2<=60)||(t2<=h&&t2>=0)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
