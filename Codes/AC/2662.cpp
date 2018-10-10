/*****Enigma27*****/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pll         pair<ll int,ll int>
#define vll          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll n,i,j,k,l,sum=0,flag=0,t,a[100005],ans=0;
string s,ret="Just a legend";
vll lps;
vll LPS(string pat)
{
    vll lps;
    lps.resize(sz(pat));
    lps[0]=0;
    ll len=0;
    ll i=1;
    while(i<sz(pat))
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len)
                len=lps[len-1];
            else
                lps[i]=0,i++;
        }
    }
    return lps;
}
int KMP(string pat,string txt)
{
    vll ans;
    vll lps = LPS(pat);
    ll i=0,j=0;
    while(i<sz(txt))
    {
        if(pat[j]==txt[i]) i++,j++;
        if(j==sz(pat))  return i-j+1;
        else if(i<sz(txt)&&txt[i]!=pat[j])
        {
            if(j)
                j=lps[j-1];
            else
                i++;
        }
    }
    return -1;
}
string pat="";
int main()
{
    //ios
    cin>>s; 
    vll temp = LPS(s);
    for(int i=1;i<s.size()-1;i++) pat+=s[i];
    if(sz(s)<3) cout<<ret<<endl;
    else{
       for(int mid= temp.back();mid>0;mid=temp[mid-1]){
           int t = KMP(s.substr(0,mid),pat);
           if(t==-1) continue;
           else{
                cout<<s.substr(0,mid)<<endl;
                return 0;
            }
        }
        cout<<ret<<endl;
    }
    return 0;
}