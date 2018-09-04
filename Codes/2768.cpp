#include<bits/stdc++.h>

#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second

#define Set(a, s) memset(a, s, sizeof (a))
#define sz(x) (int((x.size())))
#define all(x) (x).begin(),(x).end()

#define db(x)		 cerr << #x << " = " << x << endl
#define db2(x, y)	{cerr << #x << " = " << x << "\t";	db(y);}
#define db3(x, y, z){cerr << #x << " = " << x << "\t";	db2(y,z);}

#define sc(a) scanf("%c", &a)
#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define siii(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define sl(a) scanf("%I64d", &a)
#define sll(a, b) scanf("%I64d%I64d", &a, &b)
#define slll(a, b, c) scanf("%I64d%I64d%I64d", &a, &b, &c)
#define bye exit(0)


using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<ii> vii;

const ll MOD = 1000000007LL;
const double PI = 3.14159265359;
const double eps = 1e-7;

ll add(ll x, ll y, ll M=MOD){
	return ( x+y+2*M )%M;
}

ll mult(ll x, ll y, ll M=MOD){
	return  (add(x, 0, M)*add(y, 0, M))%M;
}

ll fast_expo(ll x, ll y, ll M=MOD){
	if(x==0) return 0;
	if(y==0) return 1;

	ll res = 1;
	ll mid = fast_expo(x, y/2, M);
	if(y%2!=0) res = x;

	return mult(mult(mid, mid, M), res, M);
}

ll inver(ll x, ll M=MOD){
	return fast_expo(x, M-2);
}


ll gcd(ll e1, ll e2){
	if(e2==0) return e1;
	return gcd(e2, e1%e2);

}

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

///////////////////////PLANCHASO//////////////////////////////////////
const int TAM = 1000000 + 5;

int n;
string s;
int prefix[TAM];
int suffix[TAM];

int main(){
    cin >> s;
    n = sz(s);
    int border;

    //Calculo de los prefijos hasta la posicion if
    prefix[0] = 0;
    border = 0;
    for(int i=1; i<n; i++){
        while(border!=0 and s[border]!=s[i]) border = prefix[border-1];
        if( s[i]==s[border] ) border++;
        else border = 0;

        prefix[i] = border;
    }
    //for(int i=0; i<n; i++) cout << prefix[i] << " ";
    //cout << endl;

    // //Calculo de los sufijos hasta la posicion i
    // suffix[n-1] = 0;
    // border = 0;
    // for(int i=n-2; i>=0; i--){
    //     while(border!=0 and s[n-1-border]!=s[i]) border = suffix[n-1-border-1];
    //     if(s[n-1-border]==s[i]) border++;
    //     else border = 0;
    //
    //     suffix[i] = border;
    // }
    // for(int i=0; i<n; i++) cout << suffix[i] << " ";
    // cout << endl;
    //
    // int tam = 0;
    // for(int i=0; i<n; i++){
    //     tam = min( prefix[i], suffix[i-prefix[i]+1] );
    // }

    map<int, int>mapa;

    for(int i=1; i<n-1; i++) mapa[prefix[i]] = 1;
    int ma = prefix[n-1];
    while(ma!=0){
        mapa[ma]++;
        ma = prefix[ma-1];
    }
    mapa[0]++;

    int tam = 0;
    for(auto it=mapa.begin(); it!=mapa.end(); it++){
        //db2(it->fi, it->se);
        if(it->se > 1) tam = max(tam, it->fi);
    }

    if(tam==0) puts("Just a legend");
    else cout << s.substr(0, tam) << endl;

	return 0;
}
