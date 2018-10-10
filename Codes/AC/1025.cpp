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

M par;
int main()
{
    ll n,k;
    cin>>n>>k;
    string s1;
    cin>>s1;
    ll dp[100005],dp2[100005];
    dp[0]=0;
    dp2[0]=0;
    fll(i,1,n+1)
    {
        dp[i]=dp[i-1];
        dp2[i]=dp2[i-1];
        
        if(s1[i-1]=='a')
        dp[i]++;
        else
        dp2[i]++;
    }

    ll res=1;
    vector<ll> arr1,arr2;
    arr1.push_back(0);
    arr2.push_back(0);
    //lower_bound first element less than or equal to x
    fll(i,1,n+1)
    {
        ll indx=lower_bound(arr1.begin(),arr1.end(),dp[i]-i+k,greater<ll>())-arr1.begin();
        if(indx!=arr1.size())
        {
            res=max(res,i-arr2[indx]);
        }
        if((dp[i]-i)<arr1[arr1.size()-1])
        {
            arr1.push_back(dp[i]-i);
            arr2.push_back(i);
        }
        
    }
    
    vector<ll> arr11,arr21;
    arr11.push_back(0);
    arr21.push_back(0);
    //lower_bound first element less than or equal to x
    fll(i,1,n+1)
    {
        ll indx=lower_bound(arr11.begin(),arr11.end(),dp2[i]-i+k,greater<ll>())-arr11.begin();
      //  fll(i,0,arr11.size())
    //    cout<<arr11[i]<<" ";
       // cout<<endl;
        if(indx!=arr11.size())
        {
            res=max(res,i-arr21[indx]);
        }
        if((dp2[i]-i)<arr11[arr11.size()-1])
        {
            arr11.push_back(dp2[i]-i);
            arr21.push_back(i);
        }
    //    cout<<res<<endl<<endl;
    }
    cout<<res<<endl;
    
    return 0;
}
