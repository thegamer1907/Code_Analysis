#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define all(x) x.begin(), x.end()
#define f(i,a,b) for(int i = (a); i <= (b); i++)
#define fd(i,a,b) for(int i = (a); i >= (b); i--)
#define mp make_pair
#define faster_io() ios_base::sync_with_stdio(false)
#define pb push_back
#define pii pair<int,int>
#define SZ(x) ((int)x.size())
#define vii vector<pair<int,int>>

const int INF = 1000000005;
const ll INFLL = 1000000000000000002ll;
const ll MOD = 1000000007;

inline ll min(ll a, ll b, ll c){return min(min(a,b),c);}
inline ll min(ll a, ll b, ll c, ll d){return min(min(min(a,b),c),d);}
inline ll max(ll a, ll b, ll c){return max(max(a,b),c);}
inline ll max(ll a, ll b, ll c, ll d){return max(max(max(a,b),c),d);}

// -------------------------------------------------------------------------------------------------------------

int C[2][2], A[1000005], B[1000005], N;
string S, T;

int main()
{
    faster_io();

    cin >> N >> S >> T;
    f(i,1,N) A[i] = S[i-1] - '0';
    f(i,1,N) B[i] = T[i-1] - '0';
    int ans = 0;
    f(i,1,N-1) if(A[i] != B[i] && A[i+1] != B[i+1] && A[i] != A[i+1])
    {
        swap(A[i], A[i+1]);
        ans++;
    }
    f(i,1,N) if(A[i] != B[i]) ans++;
    cout << ans;
}
