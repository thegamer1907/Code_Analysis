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
    ll cc=0;

    FORN(i,1,w)
        cc+=k*i;

    if(cc-n>0)
        cout << cc-n << endl;
    else
        cout << 0 << endl;

    return 0;
}
