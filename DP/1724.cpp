/***************BISMILLAHIR RAHMANIR RAHIM***************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
using namespace std;

#define  ll             long long int
#define  ull            unsigned long long int
#define  ld             long double
#define  fast()         ios :: sync_with_stdio(false); cin.tie(0);
#define  max3(a,b,c)    max(a,max(b,c))
#define  max4(a,b,c,d)  max(max3(a,b,c),d)
#define  min3(a,b,c)    min(a,min(b,c))
#define  min4(a,b,c,d)  min(min3(a,b,c),d)
#define  loop(i,val,n)  for(int i=val; i<n; i++)
#define  pool(i,val,n)  for(int i=n-1; i>=val; i--)
#define  st             string
#define  vecc           vector<char>
#define  veci           vector<int>
#define  vecli          vector<ll>
#define  vecp           vector<pair<int,int> >
#define  pb             push_back
#define  mp             make_pair
#define  all(v)         v.begin(),v.end()
#define  sz             size()
#define  nl             "\n"
#define  mod            1000000007
#define  bye            return 0

int main()
{
  ll a,b,c,i,j,k,l,m,n,o,p,q=0,r=0,t=0,ck=0;
  fast();
  st s;
  cin>>s;
  if(s.sz<=3){cout<<"NO";bye;}
  if(s.sz==4){
    for(i=0; i<s.sz; ){
    if(s[i]=='A'&&s[i+1]=='B'&&ck==0){ck++;i+=2;}
    if(s[i]=='B'&&s[i+1]=='A'&&t==0){t++;i+=2;}
    else i++;
  }
  if(ck==1&&t==1){cout<<"YES";bye;}
  else{cout<<"NO"; bye;}
  }

  for(i=0; i<s.sz; ){
    if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')i+=3;
    else if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')i+=3;
    if(s[i]=='A'&&s[i+1]=='B'&&ck==0){ck++;i+=2;}
    if(s[i]=='B'&&s[i+1]=='A'&&t==0){t++;i+=2;}
    else i++;
  }
  if(ck==1&&t==1)cout<<"YES";
  else{
       for(i=0; i<s.sz;i++){
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')r=1;
        else if(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')q=1;
       }
       if((r==1||q==1)&&(ck==1||t==1))cout<<"YES";
       else cout<<"NO";

  }
    bye;
}
/****************ALHAMDULILLAH*****************/
