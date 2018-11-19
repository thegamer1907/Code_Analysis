#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h = h*5;
    t1 = t1*5;
    t2 = t2*5;
    m += s/60;
    h += m/60;
    // m += s/60;
    int a,b,c;
    a= b =c =0;
    if(t1>t2)
    {
        int tmp = t1;
        t1 = t2;
        t2 = tmp;
    }
    if(h>t1&&h<t2)  a = 1;
    else a = 2;
    if(m>t1&&m<t2)  b = 1;
    else b = 2;
    if(s>t1&&s<t2)  c = 1;
    else c = 2;
    if(a==b && b==c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}