#include <iostream>
#include <bits/stdc++.h>
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9
// Useful hardware instructions
#define bitcount                    __builtin_popcount
#define gcd                         __gcd
// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair
// Some common useful functions
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int a[110];

int main()
{
    int n, mx = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    if (n == 1){
        cout << 1 - a[0];
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n + 1; j++){
            for(int k = i; k < j; k++){
                a[k] = 1 - a[k];
                //cout << a[k] << endl;
            }
            int sum = 0;
            for(int k = 0; k < n; k++){
                if (a[k] == 1){
                    sum++;
                }
            }
            mx = max(sum, mx);
            for(int k = i; k < j; k++){
                a[k] = 1 - a[k];
            }
        }
    }
    cout << mx;
    return 0;
}
