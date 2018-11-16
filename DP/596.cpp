#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 4007;
const int inf = 1e18+7;
const int mod = 1e9+7;
void pa(int a[],int n){
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

signed main() {
    fio;
    string s; cin>>s;
    int n=s.size();
    int a[n]={0};
    for (int i=1; i<n; i++)
    {
        if (s[i]==s[i-1])
            a[i]=a[i-1]+1;
        else
            a[i]=a[i-1];
    }
    int m; cin>>m;
    while (m--)
    {
        int l,r; cin>>l>>r;
        l=max(0LL,l);
        r=min(n,r);
        //cout<<l<<" "<<r<<endl;
        l--,r--;
        cout<<(a[r]-a[l])<<endl;
    }
    //for (int i=0; i<n; i++)
      //  cout<<a[i]<<" ";
    return 0;
}