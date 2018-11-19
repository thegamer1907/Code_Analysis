#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int h,m,s,t1,t2,a[4],a1,a2,a3;
int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    a[1]=h+1;
    if(a[1]>12)a[1]=1;
    a[2]=(m/5)+1;
    if(a[2]>12)a[2]=1;
    a[3]=(s/5)+1;
    if(a[3]>12)a[3]=1;
    sort(a+1,a+3+1);
    a1=a[1];a2=a[2];a3=a[3];
    if(a1<=t1&&t1<a2&&a1<=t2&&t2<a2)cout<<"YES"<<endl;
    else if(a2<=t1&&t1<a3&&a2<=t2&&t2<a3)cout<<"YES"<<endl;
    else if(((a3<=t1&&t1<=12)||(t1>=1&&t1<a1))&&((a3<=t2&&t2<=12)||(t2>=1&&t2<a1)))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
