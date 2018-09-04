/*
 *    
 */
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <list>
#include <cstring>
#include <stack>
#include <map>
//#include <unordered_map>
#include <set>
#include <utility>
#include <queue>
#include <deque>
#include <ctime>
#include <complex>
#include <bitset>
#include <time.h>
#include <iomanip>
#include <cassert>

using namespace std;
#define PB push_back
#define LL long long
#define MP make_pair
#define X first
#define Y second
typedef unsigned long long ULL;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<LL> vl;
typedef set<int> Set;

#define DBG 0

#define fori(i,a,b) for(int i = (a); i < (b); i++)
#define forie(i,a,b) for(int i = (a); i <= (b); i++)
#define ford(i,a,b) for(int i = (a); i > (b); i--)
#define forde(i,a,b) for(int i = (a); i >= (b); i--)
#define forls(i,a,b,n) for(int i = (a); i != (b); i = n[i])
#define mset(a,v) memset(a, v, sizeof(a))
#define mcpy(a,b) memcpy(a, b, sizeof(a))
#define sz(x) ((int)((x).size()))
#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())
//set_union(ALL(x1),ALL(x2),INS(x)),set_intersection

#define MIN_LD -2147483648
#define MAX_LD  2147483647
#define MIN_LLD -9223372036854775808
#define MAX_LLD  9223372036854775807
#define MAX_INF 18446744073709551615
const int INF = 0x7fffffff;
const LL MOD = 1000000007;
const int DX[] = { 1,  0, -1,  0,  1, -1,  1, -1};
const int DY[] = { 0,  1,  0, -1,  1, -1, -1,  1};

const int p = 373;
const int maxn = 1e6+10;
string s;
LL pw[maxn],h[maxn];
LL hh(int l,int r){//s[l-r]
    return h[r] - h[l-1]*pw[r-l+1];
}

int main(void){
    
    //freopen("*.in", "r", stdin);
    //freopen("*.out", "w", stdout);
    cin.sync_with_stdio(false);
    cin >> s;
    int l = s.length();
    s = '@'+s;

    pw[0] = 1;fori(i,1,maxn) pw[i] = pw[i-1]*p;
    h[0] = 0; forie(i,1,l){h[i] = h[i-1]*p+s[i];}


    int succ1 = 0, succ2 = 0, ans = -1;
    forde(len,l-2,1){
    	if(hh(1,len)==hh(l-len+1,l)){
			if(succ1==0){
				succ1 = 1;
				forie(shift,1,l-len-1){
					if (hh(1,len)==hh(1+shift,shift+len)){
						succ2 = 1;
						ans = len;
						break;
					}
				}
			}   
			else{
				succ2 = 1;
				ans = len;
			} 		
    	}
    	if(succ2)break;
    }
    if(succ2==0){printf("Just a legend\n");}
    else{
    	forie(i,1,ans){printf("%c",s[i]);}
    	printf("\n");
    }
    //cerr << "time = " << clock()*1.0/CLOCKS_PER_SEC << " s" << endl;
    return 0;
}

/*
g++ -W -O2 -std=c++14
*/

















