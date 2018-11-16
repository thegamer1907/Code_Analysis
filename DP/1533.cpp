#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll>v1[1000100];
vector <ll>v2;
map <ll,ll>m1;
map<ll,ll>m2;
map<ll,ll>m3;
map<char,ll>ms1;
map<string,ll>ms2;
stack<ll>sta;
ll mod=1e8;
ll dp[105][105][15][15];
ll big=999999999999999999,small=-999999999999999999;
ll z,y,x,n,m,i,j,k,t,l,ans,sum1,sum2,avg,test,mx=small,mn=big,b[1000100],c[1000100],a[1001000],d[1000100],co1[1000100],co2[1001000];
char s1[100010][150],s2[100100],s3[1000100],temp;
string s[101010];
bool ok[1000100], ok1,ok2;
char rl,a1[11]={'q','w','e','r','t','y','u','i','o','p'},a2[11]={'a','s','d','f','g','h','j','k','l',';'},a3[10]={'z','x','c','v','b','n','m',',','.','/'};
bool so(string a,string b)
{
    return a+b<b+a;
}
int main()
{
   cin>>n;
   for(i;i<n;i++)
    cin>>a[i];
   for(i=0;i<n;i++)
   {
       if(!a[i]&&!ok1)
       {
           c[k++]=i;
           ok1=true;
       }
       else if(a[i])
        {
            ok1=false;
            x++;
        }
   }
   ans=x;
   for(i=0;i<k;i++)
       {
           y=0;
           for(j=c[i];j<n;j++)
            {
                if(!a[j])
                    y++;
                else
                    y--;
                ans=max(ans,y+x);
            }
       }
        k==0?cout<<ans-1:cout<<ans;
    return 0;
}
