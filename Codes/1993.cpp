#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

typedef map<ll,ll> M;
#define MEM(a, b) memset(a, (b), sizeof(a)) //fill value
#define FI(i, j, k, in) for (int i=j ; i<k ; i+=in) //from j till k increment by in FOR INT
#define fl(i, j, k, in) for (long long int i=j ; i<k ; i+=in) //from j till k increment by in FOR LL
#define fll(i, j, k) for (long long int i=j ; i<k ; i+=1) //from j till k increment by in FOR LL
#define FULL(i, j, k, in) for (unsigned long long int i=j ; i<k ; i+=in) //from j till k increment by in FOR ULL
#define inf pow(10,16)
const ll ee= pow(10,9)+7;
M par[3];
int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[200005];
    fll(i,0,n)
    {
        cin>>arr[i];
    }
    
    par[0][arr[0]]=1;
    fll(i,1,n)
    {
        ll val[]={1,0,0};
        if(arr[i]%k==0)
        {
            val[1]=par[0][arr[i]/k];
        }
        if(i>=2){
        if(arr[i]%(k*k)==0)
        {
            val[2]=par[1][arr[i]/k];
        }}
        fll(j,0,3)
        {
            par[j][arr[i]]+=val[j];
        }
    }
    ll res=0;
    for(auto it=par[2].begin();it!=par[2].end();it++)
    res+=it->second;
    cout<<res<<endl;
    
    
    return 0;
}
