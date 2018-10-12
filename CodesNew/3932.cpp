#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main (){
    int n,q;cin>>n>>q;
    vector<ll>w(n),a(q);
    for(int i=0;i<n;i++)cin>>w[i];
    for(int i=0;i<q;i++)cin>>a[i];
    for(int i=1;i<n;i++)w[i]+=w[i-1];
    for(int i=1;i<q;i++)a[i]+=a[i-1];
    int ai=0;ll prev=0;
    while(q>0){
        auto it1=upper_bound(w.begin(),w.end(),a[ai]-prev);
        if(it1==w.end())cout<<n<<endl,prev=a[ai];
        else {
            if(*it1==a[ai])cout<<n-(it1-w.begin())-1<<endl;
            else cout<<n-(it1-w.begin())<<endl;
            
        }
        ai++;
        q--;
    }
    return 0;
}