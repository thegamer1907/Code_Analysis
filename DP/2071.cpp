/**mital21**/

#include<bits/stdc++.h>
#define ll          long long int
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define jell       -1000000007
#define rep(i,a,b)    for(i=a;i<b;i++)
#define tep(i,a,b)    for(i=a;i<=b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define hell        1000000007
using namespace std;

#define N  100005
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
   // cin>>TESTS;
    while(TESTS--)
    {
       ll n,m,x,a[100005],i,ans=0;
       std::map<ll,ll>lol,lop;
       cin>>n>>m;
       for(i=0;i<n;i++)
           {
               cin>>a[i];
               lol[a[i]]++;
           }
           for(i=0;i<100007;i++)
           {
               if(lol[i]>0)
                   ans++;
           }
           lop[0]=ans;
           for(i=1;i<n;i++)
           {   
               lol[a[i-1]]--;
               if(lol[a[i-1]]==0)
                   lop[i]=lop[i-1]-1;
               else
                   lop[i]=lop[i-1];

           }
           for(i=0;i<m;i++)
           {
               cin>>x;
               cout<<lop[x-1]<<endl;
           }


         
    }
    return 0;
        
}