#include <algorithm>
#include  <iostream>
#include   <cstring>
#include    <string>
#include    <cstdio>
#include    <vector>
#include     <stack>
#include     <queue>
#include     <cmath>
#include       <set>
#include       <map>
using namespace std;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
#define clr(a,x) memset(a,x,sizeof(a))
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
/*************head******************/
const int MAXN=3e4+10;
int a[MAXN];
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<n;i++)scanf("%d",&a[i]);
    a[n]=1;
    int now=1;
    while(now<=n){
        if(now==k){
            puts("YES");
            return 0;
        }
        now+=a[now];
    }
    puts("NO");
    return 0;
}
