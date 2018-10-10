#include<bits/stdc++.h>

#define   db(x)         printf("**%d\n",x)
#define   pb            push_back
#define   pii           pair<int,int>
#define   m0d           1000000007
#define   mm(x,y)       memset(x,y,sizeof(x))
#define   fs            first
#define   sc            second

using namespace std;
typedef long long ll;
typedef double dbl;

int main()
{
    long long s;
    int n;
    cin>>n>>s;
    long long int cost[n+2],sum=0,parbe=0;
    for(int i=0;i<n;i++) cin>>cost[i];
    int hi=n,lo=1;
    vector<ll>v;
    while(hi>=lo){
        v.clear();
        int mid=(hi+lo)/2;
        ll ind=1,taka=0;
        for(int i=0;i<n;i++,ind++){
            v.pb({cost[i]+((ll)mid*ind)});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<mid;i++) taka+=v[i];
        if(taka<=s){
            parbe=mid;
            sum=taka;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<parbe<<" "<<sum<<endl;
    return 0;
}
/*sample

*/

