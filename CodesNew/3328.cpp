//#include<bits/stdc++.h>

#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<queue>
#include<sstream>
#include<vector>
#include<map>
#include<stack>

using namespace std;

#define sz(a) int((a).size())
#define All(a)  (a).begin(),(a).end()
#define For(i,a,b)    for(int i=(a);i<=(b);++i)
#define Rep(i,n)      for(int i=1;i<=(n);++i)
#define Each(i,c)     for(typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define debug cout << "!!!" << endl;
#define MAX 1005
#define eps 1e-6
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define lson (p << 1)
#define rson (p << 1 | 1)
#define mid ((l + r) >> 1)

typedef unsigned long long ULL;
typedef long long LL;
typedef unsigned uint;
typedef pair<int,int> P;
LL mod = (LL)1e9 + 7;

int arr[MAX];
int main(void){
   int n, m;
   cin >> n >> m;
   Rep(i,n){
        scanf("%d", arr + i);
   }
   int Max = *max_element(arr + 1, arr + 1 + n);
   int m2 = m;
   Rep(i,n) m2 -= Max - arr[i];
   int a1;
   if(m2 >= 0){
     a1 = Max + m2 / n; if(m2 % n) a1++;
   }else a1 = Max;
   cout << a1 << ' ' << Max + m << endl;
   return 0;
}

