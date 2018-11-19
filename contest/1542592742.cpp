#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
/*hello stalker
Any data or information stolen is copyright infringement. You  will be reported.*/
long long int i,j,k,t,q,n,m,xm,ym,ii,jj,iii,jjj,row,col,fcost,nn,mm,co,fl;
string s[101],s1,s2,s3;
char c[101][101],c1;
long long int fco,eo,oo,panga,cou,oj,ojv;
map <long long,long long> map1,map2,map3;
map<string,long long>mapp,mapp1[200005];
long long int y[200008],z[262149],yf[200007],zf[3000005],a[100002],x[100005][3],depth[200008];
set <long long> set1,set2;
vector<long long> v[200];
vector<tuple<long long,long long,long long>> v1,v2,v3;
double floa,flo;
bool check[4000];
stack <long long> ss;
int main()
{
cin>>s1;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s[i];
    if(s[i]==s1)
    {
        fl=1;
    }
}
for(i=0;i<n;i++)
{
    if(s[i][1]==s1[0])
    {
        for(ii=0;ii<n;ii++)
        {
            if(s[ii][0]==s1[1])
            {
                fl=1;break;
            }
        }
    }
}
if(fl==1)

{
    cout<<"YES";
}
else cout<<"NO";
return 0;
}
