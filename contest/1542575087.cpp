/// _|_  _|_  _|_
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define re_fr(i,a,b) for(int i=a;i>=b;i--)
#define frl(i,a,b) for(ll i=a;i<=b;i++)
#define re_frl(i,a,b) for(ll i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second
#define MX 1e12
#define eps 1e-9
#define pll pair<ll,ll>
//#define mod 1000000007
#define mod2 100000000
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll n,k;
map<string,bool>m;
map<string,bool>::iterator it;
bool ans=false;
void check(string s,ll k,string t)
{
    if(k==s.size())
    {
        if(m.count(t)) ans=1;
         return;
    }
    if(s[k]=='1' || s[k]=='0') {string tx=t+"0"; check(s,k+1,tx); }
    if(s[k]=='0') {string tx=t+"1"; check(s,k+1,tx); }



}
bool check(string s)
{
    string p="";
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='0') p+='1';
        else p+='0';
    }
    if(m.count(p)) return true;
    else return false;
}

int main()
{
    fast();
    cin>>n>>k;
    frl(i,1,n)
    {
        string s="";
        frl(j,1,k)
        {
            ll x; cin>>x;
            char ch=x+'0';
            s+=ch;
        }
       if(! m.count(s) ) m[s]=true;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        string tt="";
        check(it->F,0,tt);
        if(ans)
        {
            //cout<<it->F<<endl;
            cout<<"YES"; return 0;
        }
    }
    string an1;
    for(ll i=0;i<k;i++) an1+='0';
    if(m.count(an1)) cout<<"YES";
    else cout<<"NO";


}
