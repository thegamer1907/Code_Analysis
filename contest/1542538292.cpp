#include<bits/stdc++.h>
typedef long long int ull;
typedef long long int ll;
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define m_p make_pair
#define int_char_index(a) a-'0'
#define neginf -1000000001
#define inf 1000000000000000001
#define mod 998244353
#define F first
#define S second
#define fr(j,x,y) for(j=x;j<=y;j++)
#define N 1048576
using namespace std;
ll power(ll x, ll y){ ll res = 1; x = x % mod;  while (y > 0){ if (y & 1)res = (res*x) % mod; y = y>>1;x = (x*x) % mod;  }return res;}
ll bst(ll a[],ll item,ll index,ll n){ ll b=index,e=n,mid; mid=(b+e)/2; while(a[mid]!=item&&b<=e) { if(a[mid]<item) b=mid+1; else e=mid-1; mid=(b+e)/2; } return mid; }
ll max3(ll x,ll y,ll z){    return max(max(x,y),z);}
ll min3(ll x,ll y,ll z){    return min(min(x,y),z);}
string cir_shift(string s){ string s1; ll len; len=s.size(); s1=s.substr(1,len-1); s1.pb(s[0]); return s1;}
void swap1(ll &a,ll &b){ll temp;temp=a;a=b;b=temp;}


struct foo{
ll a1,a2,a3,a4;
};
bool comp(foo a,foo b)
{
    if(a.a1!=b.a1)
    {
        return a.a1<b.a1;
    }
    if(a.a2!=b.a2)
    {
        return a.a2<b.a2;
    }
    if(a.a3!=b.a3)
    {
        return a.a3<b.a3;
    }
    return a.a4<b.a4;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();cout.tie();

    ll p,t,i,n;
    cin>>p>>t;
    foo a[p];
    vector<foo> v;
    fr(i,0,p-1)
    {
        if(t==1)
        {
            cin>>a[i].a1;
            a[i].a2=a[i].a3=a[i].a4=0;
        }
        else if(t==2)
        {
            cin>>a[i].a1>>a[i].a2;
            a[i].a3=a[i].a4=0;
        }
        else if(t==3)
        {
            cin>>a[i].a1>>a[i].a2>>a[i].a3;
            a[i].a4=0;
        }
        else
        {
            cin>>a[i].a1>>a[i].a2>>a[i].a3>>a[i].a4;
        }
    }
    n=p;
    sort(a,a+n,comp);
    v.pb(a[0]);

    ll j=0;
    fr(i,1,n-1)
    {
        if(v[j].a1==a[i].a1&&v[j].a2==a[i].a2&&v[j].a3==a[i].a3&&v[j].a4==a[i].a4)
        {
            continue;
        }
        else
        {
            v.pb(a[i]);
            j++;
        }
    }

    ll len=v.size();
    foo val;
    fr(i,0,len-2)
    {
        fr(j,i+1,len-1)
        {
            val.a1=v[i].a1+v[j].a1; val.a2=v[i].a2+v[j].a2;  val.a3=v[i].a3+v[j].a3;  val.a4=v[i].a4+v[j].a4;
            if(val.a1<=1&&val.a2<=1&&val.a3<=1&&val.a4<=1)
            {
                cout<<"YES";
                return 0;
            }
        }
    }

    if(len==1)
    {
        val=v[0];
        if(val.a1<=0&&val.a2<=0&&val.a3<=0&&val.a4<=0)
        {
            cout<<"YES";
            return 0;
        }

    }

    cout<<"NO";
}
