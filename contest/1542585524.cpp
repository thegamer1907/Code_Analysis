#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<string>
using namespace std;
string s,t[200],x;
int mod(int x)
{
    if (x==61) return 1;
    else return x;
}
int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    t1*=5;t2*=5;h*=5;
    if (m==0) m=60;
    if (s==0) s=60;
    int flag=0;
    for (int i=t1;i!=t2;i=mod(i+1))
    {
        if (i==h||i==s||i==m)
        {
            flag++;
            break;
        }
    }
    for (int i=t2;i!=t1;i=mod(i+1))
    {
        if (i==h||i==s||i==m)
        {
            flag++;
            break;
        }
    }
    if (flag==2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
