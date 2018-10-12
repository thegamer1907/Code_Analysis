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

LL num[4];
LL arr[4];
LL p[4];
char s[MAX];
LL t[4];
int main(void){
   scanf("%s", s + 1);
   int ll = strlen(s+1);
   Rep(i,ll){
        switch(s[i]){
            case 'B': num[1]++; break;
            case 'S': num[2]++; break;
            case 'C': num[3]++; break;
        }
   }

   Rep(i,3) scanf("%d", &arr[i]);
   Rep(i,3) scanf("%d", &p[i]);
   LL money; cin >> money;
   LL l = 0; LL r = 1e15;
   LL an;
   while(l <= r){
      //cout << l << ' '  << r << endl;
        LL m = mid;
        LL c = 0;
        Rep(i,3) c += max((LL)0, m * num[i] - arr[i]) * p[i];
      //  cout << c << endl;
        an = r;
        if(c > money) r = m - 1;
        else l = m + 1;


   }
   LL c = 0;
   Rep(i,3) c += max((LL)0, l * num[i] - arr[i]) * p[i];
  // cout << c << endl;
   if(c > money) l--;
   cout << l << endl;
   return 0;
}

