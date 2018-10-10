#include<bits/stdc++.h>
using namespace std;

long long mn=1;
pair<long long,long long>a[100005];
long long n,d,ans,ansnow;

int main(){
    cin >> n >> d;
    for(int i=1;i<=n;i++)  cin >> a[i].first >> a[i].second;
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        while(a[i].first-a[mn].first>=d){
            ansnow-=a[mn].second;
            mn++;
        }
        ansnow+=a[i].second;
        ans=max(ans,ansnow);
    }
    cout<<ans<<"\n";
}