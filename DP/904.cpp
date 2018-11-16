#include <bits/stdc++.h>
using namespace std;
#define printArr(harry, tam) range(tam) cout << harry[i] << " \n"[i == tam -1];
#define maxn 100000
#define mod 1000000007
#define md(x) ((((x) % mod)+ mod) % mod)
#define sc scanf
#define pr printf
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define EPS 1e-9
#define INF INT_MAX
#define INFd 1e9

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;

//Trace dinamico
template<typename T>
void trace(T a) { cout << a << "\n"; }
template<typename T, typename... Args>
void trace(T a, Args... args) { cout << a << " "; trace(args...); }

//DP debug
int recNum = 0;
void prTabs() { for(int i = 0; i < recNum; i++) cout << "    "; }
template<typename... Args>
void recInit(Args... args) { prTabs(); trace("rec(", args..., ")"); recNum++; }
template<typename T>
void recEnd(T a) { prTabs(); trace("->", a); recNum--;}
int n, m, a, b, c;
//vector<int> g[maxn];
int li[101];
int main(){
    sc("%d\n", &n);
    li[0] = 0;
    for(int i = 1; i <= n; i++) {
        sc("%d", &a);
        li[i] = li[i-1]+ a;
    }
    int maxi = -n-5;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            int dif = ((j-i+1) - (li[j] - li[i-1])) - (li[j] - li[i-1]);
            maxi  = max( maxi, li[n] + dif);
        }
    }
    pr("%d\n", maxi);
	/*
	//Entrada 1
    while ((ch = getc()) != '\n') {
      s[n++] = ch;
    }
	//Entrada 2
    sc("%d\n", &n);
    for (int i = 0; i < n; i++) {
        sc("%d", li+i);
    }
	//Entrada 3
    sc("%s", &s);
	//Entrada 4
    while(sc("%d\n", &n) != EOF){

    }*/
 	return 0;
}
