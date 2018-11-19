#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <Math.h>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define pf push_front
#define pb push_back
#define se second
#define si size()
#define sc scanf
#define pr printf
#define sc2(a,b) scanf("%d %d",&a,&b)
#define sc3(a,b) scanf("%d %d %d",&a,&b,&c)
#define fi first
#define er erase
#define be begin
#define ss size
#define Int __int64
#define INF 100000000000000008
#define MOD 1000000007
#define MN 500500
#define eps 0.0000000000000000018
#define mem(a) memset(a,0,sizeof(a))
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;


int main()
{
    string s,sx;
    int x;
    bool found1=0,found2=0;
    cin>>s;
    cin>>x;
    forn(i,x){
        cin>>sx;
    if(s[0]==sx[1]){found1=1;}
    if(s[1]==sx[0]){found2=1;}
    if(s[0]==sx[1] && s[1]==sx[0]){cout<<"YES";return 0;}
    if(s==sx){cout<<"YES";return 0;}
    }
    if(found1 && found2){cout<<"YES";}
    else{cout<<"NO";}
	return 0;
}
