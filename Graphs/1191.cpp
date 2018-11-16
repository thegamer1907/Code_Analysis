/*
USER: ripghale
LANG: C++

_Bismillahirrahmanirrahim_

All Rights Rezerved by the BGO

*/


#include <iostream>
#include <cstdio>
#include <vector>
#include  <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstring>
#include <cfloat>
#include <cmath>
#include <cassert>
#include <locale>
#include <string>
#include <bitset>
#include <functional>
#include <climits>
#include <iomanip>
#include <cstdarg>

using namespace std;


#define testcase() int tc,tci; sf(tc); for(tci=1; tci<=tc; tci++)

#define fi() freopen("i.txt","r", stdin)
#define fo() freopen("o.txt","w", stdout)
#define fri(x) freopen(x,"r", stdin)
#define fro(x) freopen(x,"w", stdout)
#define met(a,b) memset(a,b,sizeof a);

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define sf(a) scanf("%d", &a)
#define sff(a, b) scanf("%d %d", &a, &b)
#define sfff(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define pf(a) printf("%d\n", a)
#define pff(a, b) printf("%d %d\n", a, b)
#define pfff(a, b, c) printf("%d %d %d\n", a, b, c)

#define all(a) a.begin(), a.end()
#define pb push_back

#define loop(i, j, n) for(int i=j; i<n; i++)
#define ctrl() printf("xxxxxxxxxxxxxxxxxxxxxxx\n")

#define F first
#define S second

#define inf INT_MAX-10

//------bitmask operations------//
#define setbit(x, j) x |= (1<<j)
#define removebit(x, j) x &= ~(1<<j)
#define checkbit(x, j) x &= (1<<j)
#define flipbit(x, j) x ^= (1<<j)
#define lsb(x, t) t= (x & (-x) )
//------------------------------//



void debug(int n, ...){
    va_list v1;
    va_start(v1, n);
    for(int i=0; i<n; i++){
        int val=va_arg(v1, int);
        printf("%d ", val);
    }
    va_end(v1);
    printf("\n");
}

    /////////////////////////////////////////////////////

        ///////////         ////        /////////
        //        //        ////        ///     //
        //        //        ////        ///      //
        ///////////         ////        ///     //
        //      //          ////        /////////
        //       //         ////        ///
        //        //   ///  ////  ///   ///
        //         //  ///  ////  ///   ///

    /////////////////////////////////////////////////////

const int N= 3e4+7;

int d[N];

int main(){
	int n, k;
	sff(n, k);
	for(int i=1; i<n; i++){
		sf(d[i]);
	}
	int it=1;
	while(it<k){
		it+=d[it];
	}
	if(it==k)
		printf("YES");
	else
		printf("NO");
	return 0;
}
