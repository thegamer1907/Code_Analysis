#include <bits/stdc++.h>
#define all(t) (t).begin(),(t).end()
#define CLR(a) memset((a),0,sizeof(a))
#define pb push_back
#define pf push_front
#define mp(a,b) make_pair(a,b)
#define fr first
#define sc second
#define inf 2e9
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef pair<LL,LL> pLL;
typedef vector<pLL> vpLL;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vLL;
typedef vector<vLL> vvLL;
typedef map<int,int> mii;
typedef map<LL,LL> mLL;
typedef long double ld;

int M = 1e9+7;

int main(){
    //ios::sync_with_stdio(false);
//    freopen("xyz.txt", "r", stdin);
    int n,m,i,j,l,r;
    vector<int> h(1e7+1,0),v(1e7+1,1),t(1e7+1,0),p(1e7+1,0);
    scanf("%d", &n);
    vector<int> a(n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        h[a[i]]++;
    }
    for(i=2;i<=1e7;i++){
        if(v[i]){
            for(j=i;j<=1e7;j+=i){
                v[j]=0;
                t[i]+=h[j];
            }
        }
    }

    for(i=2;i<=1e7;i++){
        p[i]=p[i-1]+t[i];
    }

    scanf("%d",&m);
    while(m--){
        scanf("%d%d",&l,&r);
        printf("%d\n", p[min((int)1e7,r)]-p[min((int)1e7, l-1)] );
    }

    return 0;
}
















