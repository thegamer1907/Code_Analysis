#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;
#define PI 3.14159265359
#define eps 1e-7
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORN(i,a,b) for(int i=a;i<=b;i++)
const int INF = 1<<29;
typedef unsigned long long ull;
typedef long long ll;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ll n,m;
ll A[100005],D[100005];
set<ll> S;

int main(){
	ios_base::sync_with_stdio(false); //Fast I/O
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);	

    cin >> n >> m;

    FORN(i,1,n)
        cin >> A[i];

    for(int i=n;i;i--){
        S.insert(A[i]);
        D[i]=S.size();
    }

    FOR(i,0,m){
        ll x;
        cin >> x;

        cout << D[x] << endl;
    }

    return 0;
}
