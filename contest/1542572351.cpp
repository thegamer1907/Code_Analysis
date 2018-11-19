#include <bits/stdc++.h>
using namespace std;


typedef  long long ll;

ll n,m;

bool test=false,test2=false; ;

ll const N=1e5+7;

 vector<ll> v,v1,v2;
//vector<ll> v,vv,vv1;


vector<pair<ll,ll> > vv;

map<ll,ll> my;
map<ll,ll> my1;

priority_queue<ll> q;

ll  t[N];

ll dx[4]={0,1,0,-1};
ll dy[4]={1,0,-1,0};



bool in_da_prison(ll x,ll y)
{
    return (x<9   && x>=0  && y<9 && y>=0);
}

int main() {


ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll i=0,j=0,a=0,b=0,c=1e9,d=0,k=0,h=0,f,s,t1,t2;
string s1,s2,s3;
cin>>h>>m>>s>>t1>>t2;
if(s!=0 || m!=0) test=true;

if(m==0) m=60;
if(s==0) s=60;
h*=5;
t1*=5;
t2*=5;
if(t1==s) {cout<<"NO";return 0;}
 if(t2==s) {cout<<"NO";return 0;}
v.push_back(h);
v.push_back(m);
v.push_back(s);
sort(v.begin(),v.end());
if(test)
{

if(t1>v[0]  && t1<=v[1]  &&t2>v[0]  && t2<=v[1]) {cout<<"YES";return 0;}
else if(t1>v[1]  && t1<=v[2]  &&t2>v[1]  && t2<=v[2]) {cout<<"YES";return 0;}
else if(t1>v[2]  && t1<=60  && t2>v[2]  && t2<=60) {cout<<"YES";return 0;}
else if(t1>0  && t1<=v[0]  && t2>0  && t2<=v[0]) {cout<<"YES";return 0;}
else if(t1>v[2]  && t1<=60  &&t2>0  && t2<=v[0]) {cout<<"YES";return 0;}
else if(t2>v[2]  && t2<=60  &&t1>0  && t1<=v[0]) {cout<<"YES";return 0;}
}
else
{
    if(t1>v[0]  && t1<v[1]  &&t2>v[0]  && t2<v[1]) {cout<<"YES";return 0;}
else if(t1>v[1]  && t1<v[2]  &&t2>v[1]  && t2<v[2]) {cout<<"YES";return 0;}
else if(t1>v[2]  && t1<=60  && t2>v[2]  && t2<=60) {cout<<"YES";return 0;}
else if(t1>0  && t1<v[0]  && t2>0  && t2<v[0]) {cout<<"YES";return 0;}
else if(t1>v[2]  && t1<=60  &&t2>0  && t2<v[0]) {cout<<"YES";return 0;}
else if(t2>v[2]  && t2<=60  &&t1>0  && t1<v[0]) {cout<<"YES";return 0;}
}
cout<<"NO";

    return 0;
}