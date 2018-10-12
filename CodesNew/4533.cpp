#include<bits/stdc++.h>
#define sci(a) scanf("%d", &a)
#define sci2(a,b) scanf("%d %d", &a, &b)
#define scll(a) scanf("%I64d", &a)
#define scll2(a,b) scanf("%I64d %I64d", &a, &b)
#define pf printf
#define for1(i,n) for(int i=1; i<=n; i++)
#define for0(i,n) for(int i=0; i<n; i++)

#define dbg(x)           cerr << #x << " = " << x << endl

#define INF LONG_LONG_MAX
#define inf INT_MAX
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int,int>
#define pdd pair<double,double>
#define ff first
#define ss second
#define eln "\n"
#define tr(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define all(c) c.begin(), c.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define read(f) freopen(f, "r", stdin)
#define write(f) freopen(f, "w", stdout)


using namespace std;

bool invalid[500005];


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;

    cin>> n;
    int a[n+5];
    for1(i,n) cin>> a[i];
    sort(a+1, a+n+1);
    int cnt=0;
    //for1(i,n) cout<< a[i] << " ";
    //cout<< eln;

    int half= n/2;
    int li= half+1;
    bool f=0;
    for(int i=1; i<=half; i++){

        for(int j= li; j<=n; j++){
            if(a[i]*2<=a[j]){
                cnt++;
                li=j+1;
                f=1;
                break;
            }
        }
        if(!f)  break;
    }

    cout<< n-cnt;
    return 0;
}

