#include<bits/stdc++.h>
using namespace std;
///Welcome to Nasif's Code
#define p printf("bug\n");
#define co(q) cout<<q<<endl;
typedef long long int ll;
typedef unsigned long long int ull;
const int MOD = (int)1e9+7;
const int MAX = 1e6;
#define pi acos(-1)
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);
ll special[100005];
int bs(int low,int high,ll value)
{
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(special[mid]<=value)
        {
            ans=max(ans,mid);
            low=mid+1;
        }
        else if(special[mid]>=value)
            high=mid-1;
    }
    return ans;
}
int main()
{
//freopen("output.txt", "w", stdout);

    ll n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    int i;
    for(i=0; i<m; i++)
    {
        scanf("%lld",&special[i]);
    }
    ll number_count=k,page;
    int ans=0,l=0,r;
    for(i=0; i<m;)
    {
        int temp=bs(l,m-1,number_count);
        //co(number_count)
        if(temp!=-1)
        {
            ans++;
            i+=temp-l+1;
            number_count+=temp-l+1;
            l=temp+1;
            //co(number_count)
        }
        else
        {
            ll check=special[i]/number_count;
            number_count+=k*check;
           //co(number_count)
        }
    }
    printf("%d\n",ans);






    return 0;
}