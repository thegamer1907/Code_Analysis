#include <bits/stdc++.h>
using namespace std;

#define int long long
#define rep(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define eb emplace_back
#define dump(x) cout << #x << " = " << (x) << endl
#define chk() cout << "now" << endl;
#define ALL(x) (x).begin(),(x).end()
#define SORT(c) sort((c).begin(), (c).end())
#define SORTG(c) sort(ALL(c), greater<int>());
#define fi first
#define se second
#define INF (1e9)

typedef pair<int,int> P;
typedef vector<int> vi;



signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n,m,k;
    cin>>n>>m>>k;
    vi p(m);
    rep(i,0,m) cin>>p[i];

    int ctn=0,cri=k,ans=0;
    if(p[0]>cri) {
        int a=(p[0]-cri)/k;
        cri+=(a+1)*k;
    }
    rep(i,0,m-1) {
        if(p[i]<=cri and p[i+1]<=cri) {
            ctn++;
        }else if(p[i]<=cri and p[i+1]>cri) {
            ctn++;
            cri+=ctn;
            ctn=0;
            ans++;
            if(p[i+1]>cri) {
                int a=(p[i+1]-cri)/k;
                if((p[i+1]-cri)%k==0) {
                    cri+=a*k;
                }else{
                    cri+=(a+1)*k;
                }
            }
        }
    }
    cout<<ans+1<<endl;
    return 0;



}