///        +====================+
///        "In The Name Of Allah"
///    +----+------------------+----+
///    |2017| Ali Mollahoseini |1396|
///    | 10 +------------------+ 07 |
///    | 05 |   CF Round 438   | 13 |
///    +----+------------------+----+


#include <bits/stdc++.h>
#define ll long long
#define int long long
#define F first
#define S second
#define pb push_back
#define Init ios::sync_with_stdio(0);

const int MX = 2*100*1000 + 100;
const int inf = 0x7FFFFFFF;
const int mod = 1000 * 1000 * 1000 + 7;
using namespace std;
int n,k;
int inp[MX];
map<int,int> miz;
map<int,int> sum;
int32_t main(){
    Init
    int ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>inp[i];
        if(!(inp[i]%k)){
            ans+=sum[inp[i]/k];
            sum[inp[i]]+=miz[inp[i]/k];
        }
        miz[inp[i]]++;
    }
    cout<<ans<<endl;
}

