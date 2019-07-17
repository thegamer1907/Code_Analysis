#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int _=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

ll binary_search(ll start, ll end, ll k, ll minus,vector<ll> v)
{
    if(v[v.size()-1]-minus <=k)
        return v.size();
    if(v[start]-minus>k)
        return start;
    if(start>end)
        return start;
    
    while(start<end)
    {
        ll mid = start + (end-start)/2;
        
        if(v[mid]- minus > k )
            end=mid;
        else
            start=mid+1;
    }
   // cout<<"SFAASF ";
    return start;
}


int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    
    vector<ll> v;
    
    for(int i=0;i<m;i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
   // sort(v.begin(),v.end());
    ll pos=0,minus=0,count=0;
    if(k==1)
        cout<<m<<endl;
    else{
    while(pos<v.size())
    {
       
         ll y =(v[pos]-minus)/k;
         if((v[pos]-minus)%k ==0)
            minus+= k*(y-1);
        else
            minus+=k*y;
        // cout<<minus<<endl;
        ll x =binary_search(pos,v.size()-1,k,minus,v);
       // cout<<x<<" ";
        if(x==pos)
            minus+=k;
        else
        {
            minus+=x-pos;
            pos=x;
            count++;
        }
       // cout<<minus<<"ub ";
        //count++;
       
    }
    cout<<count<<endl;
    }
}