#include <bits/stdc++.h>

#define fi first
#define se second
#define endl "\n"
#define y1 yy
#define P_B push_back
#define M_P make_pair
#define DBG cout<<"___________________________________\n";
using namespace std;
typedef long long ll;
ll n,m,i,j,l,r,x,y,k,t,z,mx=-1e18;;
map<ll,ll> mp;
map<ll,ll> :: iterator i1;
vector<ll> v;
pair<ll,ll> Mx,a[500000];
char c;
string s;
int main()
{
    ll a=0,b=0,c=0,x,y,z,X,Y,Z,mi;
    cin>>s>>x>>y>>z>>X>>Y>>Z>>k;
    for(i=0;i<s.size();++i){
        if(s[i]=='B')++a;
        if(s[i]=='S')++b;
        if(s[i]=='C')++c;
    }
    //DBG
    //cout<<a<<" "<<b<<" "<<c<<endl;
    //DBG
    l=0,r=2e12,mi=0;
    while(l<r){
        mi=(l+r)/2;
        ll sum=0;
        if(x<a*mi)sum+=((a*mi)-x)*X;
        if(y<b*mi)sum+=((b*mi)-y)*Y;
        if(z<c*mi)sum+=((c*mi)-z)*Z;
        if(sum<k)l=mi+1,mx=max(mx,mi);
        else if(sum>k)r=mi;
        else {
            cout<<mi;
            return 0;
        }
        //cout<<"  l="<<l<<"   r="<<r<<"   mi="<<mi<<"   sum="<<sum<<"   k="<<k<<endl;
    }
    cout<<mx;
    return 0;
}
