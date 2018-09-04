#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define sd(x) scanf("%d",&x)
#define pb push_back



double sum[3000009];

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

//freopen("input.txt","r",stdin);


int t=1;
//cin>>t;


while(t--){

int n,k;
cin>>n>>k;

string s;
cin>>s;

vector<int> a,b;
a.pb(-1);
b.pb(-1);

for(int i=0;i<n;i++){
if(s[i]=='a')
a.pb(i);
else
b.pb(i);
}
a.pb(n);
b.pb(n);


int mx=1;
if(a.size()<=k+2 || b.size()<=k+2)
    mx = n;
else{

for(int i=k+1;i<a.size();i++)
{
 int st = 0;
st = a[i-k-1]+1;

int en = a[i]-1;

 mx= max(mx,en-st+1);

}

for(int i=k+1;i<b.size();i++)
{
 int st = 0;
   st = b[i-k-1]+1;

 int en = b[i]-1;

 mx= max(mx,en-st+1);

}

}
/*
else
{

for(int i=0;i<a.size();i++)
{
 int st = a[i]+1;
 int en = n-1;
 if(i+1 < a.size() )
   en = a[i+1]-1;
 mx= max(mx,en-st+1);

 st = 0;
  en = a[i]-1;
 if(i-1 >=0 )
   st = a[i-1]+1;
 mx= max(mx,en-st+1);


}

for(int i=0;i<b.size();i++)
{
 int st = b[i]+1;
 int en = n-1;
 if(i+1 <b.size() )
   en = b[i+1]-1;
 mx= max(mx,en-st+1);

 st = 0;
  en = b[i]-1;
 if(i-1 >=0 )
   st = b[i-1]+1;
 mx= max(mx,en-st+1);


}

}

*/



cout<<mx;

}
}
