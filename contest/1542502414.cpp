#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
#include <functional>
#include <map>

#define REP(i,j,k) for(int (i)=(j);(i)<=(k);(i)++)
#define ERP(i,j,k) for(int (i)=(j);(i)>=(k);(i)--)
#define MEM(a,b) memset(a,b,sizeof(a))
#define NE putchar('\n')
#define SP putchar(' ')
#define fi first
#define sc second
#define mkp make_pair
#define pb push_back
#define all(a) a.begin(),a.end()
#define lson l,mid,x<<1
#define rson mid+1,r,x<<1|1
#define lc(a) ch[(a)][0]

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PI;
typedef pair<ll,ll> PLL;

const double eps=1e-6;
const int mod=1e9+7;
const ull ha1=1e9+7;
const ull ha2=1e9+9;
const int maxn=1005;
const int maxm=1e6+10;
const int inf=1e9+7;

//IO
template<typename Type>inline void read(Type&in){
    in=0;Type f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){in=in*10+ch-'0';ch=getchar();}
    in*=f;
}

template<typename Type>inline void out(Type o){
    if(o<0){putchar('-');o=-o;}
    if(o>=10) out(o/10);
    putchar(o%10+'0');
}

/*Header*/
//printf("%d%c",a[i]," \n"[i==n]);


set<int> s;
int n,k;

int main(){
    read(n);read(k);
    REP(i,1,n){
        int num=0,tem;
        REP(j,1,k){
            read(tem);
            num|=(tem<<(j-1));
        }
        s.insert(num);
    }
    if(*s.begin()==0){
        puts("YES");
        return 0;
    }
    for(auto i:s){
        int now=i^15;
        for(int j=1;j<=15;j++){
            if((j&now)==j){
                if(s.find(j)!=s.end()){
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");
    return 0;
}