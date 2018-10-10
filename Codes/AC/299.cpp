#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = (a), _b = (b); i <= _b; ++i)
#define rep(i, a, b) for(int i = (a), _b = (b); i < _b; ++i)
#define fd(i, a, b) for(int i = (a), _b = (b); i >= _b; --i)
#define SZ(x) ((int)(x).size())
#define db(x) cout << #x << " == " << x << endl
#define _ << ", " <<
#define X first
#define Y second
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define endl '\n'
#define pc putchar
#define gc getchar
#define bit(i) (1<<(i))

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;

const int N=1e5+5;
int n,a[N];

void enter(){
    cin>>n;
    ff(i,1,n){
        cin>>a[i];
        a[i]+=a[i-1];
    }
}

void process(){
    int m;
    cin>>m;
    while (m--){
            int q;cin>>q;
        int lo=1,hi=n;
        while (lo<=hi){
            int mid=(lo+hi)>>1;
            if (a[mid]>=q) hi=mid-1;
            else lo=mid+1;
        }
        cout<<lo<<endl;
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
//	freopen("test.inp","r",stdin);
//	freopen("test.out","w",stdout);

    enter();
	process();

	return 0;
}
