#include<bits/stdc++.h>
#define f first
#define s second
#define ll long long
using namespace std;

  int m,a,b,c,n,d,i,j,k,ans,cnt,w,x,y,z;
 int ara[100010];

  int gcd(int a, int b){
  if(b==0)return a;
  return gcd(b,a%b);
  }
map<string,int>mp1;
    int main()
    {
        string s,t,st;
        cin>>n>>m;

        for(i=0;i<n;i++){
            cin>>s;
            mp1[s]=1;
        }

          for(j=0;j<m;j++){
            cin>>t;
           if(mp1.count(t)==1)cnt++;
        }
n-=cnt;
m-=cnt;

if(cnt & 1)n++;
        if(n>m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
