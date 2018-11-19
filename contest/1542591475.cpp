#include <bits/stdc++.h>
using namespace std;


typedef  long long ll;

ll n,m;

bool test1=false,test2=false; ;

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

ll i=0,j=0,a=0,b=0,c=1e9,d=0,k=0,h=0,f;
string s,s1,s2,s3;
cin>>s;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s1;
    if(s==s1) {cout<<"YES";return 0;}
    if(s[0]==s1[1]) {test1=true;}
    if(s[1]==s1[0]) {test2=true;}
    reverse(s1.begin(),s1.end());
    if(s==s1) {cout<<"YES";return 0;}
}
if(test1&& test2) {cout<<"YES";return 0;}
cout<<"NO";
    return 0;
}
