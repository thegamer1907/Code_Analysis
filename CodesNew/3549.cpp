#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
# include <iostream>
# include <cmath>
# include <algorithm>
# include <stdio.h>
# include <cstdint>
# include <cstring>
# include <string>
# include <cstdlib>
# include <vector>
# include <bitset>
# include <map>
# include <queue>
#include <chrono>
# include <ctime>
# include <stack>
# include <set>
# include <list>
# include <random>
# include <deque>
# include <functional>
# include <iomanip>
# include <sstream>
# include <fstream>
# include <complex>
# include <numeric>
# include <immintrin.h>
# include <cassert>
# include <array>
# include <tuple>
# include <unordered_map>
# include <unordered_set>
using namespace std;
typedef long long ll;
typedef long double ld;
ll max(ll a,ll b){
    if(a>b){
        return a;
    }
    return b;
}
uint32_t rd() {
    uint32_t res;
#ifdef __MINGW32__
    asm volatile("rdrand %0" :"=a"(res) ::"cc");
#else
    res = std::random_device()();
#endif
    return res;
}
ll di(ll a, ll b){
    if(a%b==0){
        return a/b;
    }
    return a/b+1;
}
ll gcd(ll a, ll b) { if (a == 0) return b; else return gcd (b % a, a); }
ll i,e,n,m,k,q,b=0,c=0,j=0,x=0,y=0,z,w,mid=1001010,mx=-1,sum=0,f=0,hi,lo,s=0,a,d;
bool t=false;
string s1,s2;
int main(){
    cin>>n;
    cin>>m;
    s=m;
    for(i=0;i<n;i++){
        cin>>x;
        if(x>mx){
            mx=x;
        }
        s+=x;
    }
    cout<<max(di(s,n),mx)<<' '<<mx+m;
}
