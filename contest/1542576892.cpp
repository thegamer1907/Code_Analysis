#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
/*hello stalker
Any data or information stolen is copyright infringement. You  will be reported.*/
long long int i,j,k,t,q,n,xm,ym,ii,jj,iii,jjj,row,col,fcost,nn,mm,co,fl,kk;
int i1,i2,i3,i4,i12,i13,i14,i23,i24,i34,i123,i234,i124,i134;

char c[5],c1[5];
long long int fco,eo,oo,panga,cou,oj,ojv;
map <long long,long long> map1,map2,map3;
map<string,long long>mapp,mapp1[200005];
long long int y[200008],z[262149],yf[200007],zf[3000005],a[100002],x[100005][3],depth[200008];
set <long long> set1,set2;
vector<long long> v[200];
vector<tuple<long long,long long,long long>> v1,v2,v3;
int h,m,s,t1,t2,flo;
bool check[4000];
stack <long long> ss;
int main()
{
cin>>h>>m>>s;
cin>>t1>>t2;
i1=(h%12)*3600 + m*60 +s;
i2=m*720 + s*12;
i2++;i2--;
i3=s*720;i3++;i3--;
t1=t1*3600;
t2=t2*3600;
if(t1>t2)
{
    swap(t1,t2);
}
if(i1>t1 && i1<t2)
{
    co++;
}
else if(i1==t1 || i1==t2);
    else
{
    fco++;
}
if(i2>t1 && i2<t2)
{
    co++;}
    else if(i2==t1 || i2==t2);
        else
{
    fco++;
}
if(i3>t1 && i3<t2)
{
    co++;}
    else if(i3==t1 || i3==t2);
        else
{
    fco++;
}
if(row==45)
{
    //sfjbwesdjhfb
}
if(col==45)
{
    //sfjbwejfehfb
}
if(panga==45)
{cout<<"YES";
    //sfjbwwegejhfb
}
//sdf
if(co==0 || fco==0)
{
    cout<<"YES";
}
else cout<<"NO";

return 0;
}
