#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main()
{
    map<ll,ll> s1,s2;
    int n,k;
    cin>>n>>k;
    s1.clear();
    s2.clear();
    long long ans=0;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(t%k==0){
            ans+=s2[t/k];
            s2[t]+=s1[t/k];
        }
        s1[t]++;
    }
    cout<<ans<<endl;
    return 0;
}
