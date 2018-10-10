#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define ret(x) cout<<x<<endl; 
ll MOD=1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    int a[n];
    vector<int> s;
    for (int i = 0; i < n; ++i)
       {
           cin>>a[i];
           if(i) s.push_back(s[i-1]+a[i]);
           else s.push_back(a[i]);
       }   
    int m;
    cin>>m;
    int x;
    for (int i = 0; i < m; ++i)
    {
        cin>>x;
        auto it = lower_bound(s.begin(),s.end(),x);
        ret(it-s.begin()+1);
    }
    return 0;   
}