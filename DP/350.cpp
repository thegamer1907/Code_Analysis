#include<bits/stdc++.h>
using namespace std;

#define all(c) c.begin(), c.end()
#define pb push_back
#define Size(c) (int)c.size()
#define fi first
#define se second
#define clr(v, d) memset(v, d, sizeof(v))
#define mp make_pair

typedef pair<int, int> ii;
typedef vector<ii> vi;
typedef pair<int, pair<int, int> > iii;
typedef vector<iii> vii;
typedef long long ll;
typedef long double Double;
const ll MOD = 1e9+7;
const int MAXN = 1e2+5;
const int INF = 0x3f3f3f3f;

int a[MAXN];
int b[MAXN];

int main(){
    // freopen("input.in", "r", stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, i, j, ans;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>a[i];

    cin>>m;
    for(i=0;i<m;++i)
        cin>>b[i];

    sort(a, a+n);
    sort(b, b+m);

    ans = i = j = 0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=1){
            ++ans;
            ++i;
            ++j;
        }else{
            if(a[i]<b[j])
                ++i;
            else
                ++j;
        }
    }

    cout<<ans<<endl;

    return 0;
}

//RT => 
//TT => 
//CT => 
//DT =>