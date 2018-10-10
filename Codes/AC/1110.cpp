#include <bits/stdc++.h>

#define fr first
#define sc second
typedef long long ll;
using namespace std;
ll n,d;
pair<ll,ll>a[101010];
int main()
{
    cin>>n>>d;
    for(int i=0;i<n;i++){
            cin>>a[i].fr>>a[i].sc;
    }
    sort(a,a+n);
    int i=0,j=0;
    ll sum=0,mn=1e9,ans=-1;
    multiset<ll>se;
    while(i<=j&&j<n){
        while((se.size()==0||a[j].fr-mn<d)&&j<n){
            sum+=a[j].sc;
            se.insert(a[j].fr);
            mn=*se.begin();
            j++;
        }
        ans=max(sum,ans);
        se.erase(se.find(a[i].fr));
        mn=*se.begin();
        sum-=a[i].sc;
        i++;
    }
    cout<<ans;
}
