/*
***********************
2018-10-11 Thu
***********************
*/
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

ll k,n,w;

int main(){
	ios_base::sync_with_stdio(false); //Fast I/O
	cin.tie(NULL);
    cout.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);	
    
    cin >> k >> n >> w;
    // cost k + 2k + ... + wk = k(1 + .. + w) = kw(w+1) / 2
    ll cost=k*w*(w+1)/2;

    cout << max(cost-n,0LL) << endl;

    return 0;
}
