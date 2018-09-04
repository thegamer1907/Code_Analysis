#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <cstring>

#define ll long long
#define sl(n) scanf("%lld",&n)
#define lf double
#define sf(n) scanf("%lf",&n)

#define pb push_back
#define ff first
#define ss second
#define mp make_pair

#define ON(n,i) n|(1<<i)
#define OFF(n,i) n&(~(1<<i))
#define CHK(n,i) n&(1<<i)

#define SET(arr) memset( arr , -1 , sizeof arr)
#define RESET(arr) memset( arr,0,sizeof arr)

#define srt(v) sort(v.begin(),v.end())
#define found( s,d ) ( s.find(d) != s.end())

#define FILEIN freopen("in.txt","r",stdin)
#define FILEOUT freopen("out.txt","r",stdout)

using namespace std;
#define lim 1000001
ll lps[lim];

void gen_lps( string &pat ){

    ll len = 0 , i = 1 ; lps[0] = 0;
    while( i<pat.size() ){
        if( pat[i] == pat[len] ){ len++; lps[i] = len;i++;}
        else{
            if( len == 0 ) lps[i++] = 0;
            else len = lps[len-1];
        }

    }

}

string s;
int main(){

    cin>>s;
    gen_lps(s); ll n = s.size()-1;
    if( lps[n] == 0 ){ printf("Just a legend\n"); return 0; }
    else{
        for( ll i = 0 ; i<n ; i++ )
        if( lps[n] == lps[i] ){
            cout<<string( s.begin() , s.begin() + lps[i]  )<<endl;
            return 0;
        }
    }
    if( lps[lps[n]-1] == 0 ) printf("Just a legend\n");
    else{
            //cout<<lps[lps[n]-1]<<endl;
        for( ll i = 0 ; i<n ; i++ )
        if( lps[lps[n]-1] == lps[i] ){
            //cout<<lps[i]<<endl;
            cout<<string( s.begin() , s.begin() + lps[i]  )<<endl;
            return 0;
        }
    }


return 0;}

