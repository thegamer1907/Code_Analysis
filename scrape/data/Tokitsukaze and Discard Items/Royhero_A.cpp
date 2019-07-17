#include<bits/stdc++.h>
using namespace std;
const long long M =1e5+7,MOD=1e18;
typedef long long ll;
#define pb push_back
#define Y puts("YES")
#define N puts("NO")
bool f=false;
string s,p,q,ok;
vector<ll>v[M],v_1;
map<ll,ll>mp,mp_2;
set<ll>st;
ll arr[M],ar[20];
ll n,cont,par,cost=0;
struct node
{
    ll parent,ran,visit;

};
node X[M];
int main()
{
    ios::sync_with_stdio(false);//ISHWAR
    cin.tie(0);//Tourist_Twin
    ll t,b,j=0,sum=0,sum_2=0,d=0,i=0,a,mx=0,two=0,k,m,l,c=1;
    cin>>t>>m>>k;
    while(m--)
    {

        cin>>arr[i];
        i++;
    }
    l=k;
    while(1)
    {
        //cout<<l<<endl;

        while(arr[j]<=l&&j<i)
        {
            j++;
            mx++;
            c=0;

        }
        if(c==0)
        {
        d++;
        l+=mx;
        //cout<<l<<endl;
        }
        else
        {
         ll lol=(arr[j]-l)%k;
         if(lol==0)
         {
             l=arr[j];
         }
         else
         {
         l=arr[j]-lol+k;
         }
        }
        c=1;
        mx=0;
        if(j==i)
            break;
    }
    cout<<d<<endl;
    return 0;

}