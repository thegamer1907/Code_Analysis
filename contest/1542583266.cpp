#include <iostream>
#include <iomanip>
#include <climits>
#include <stack>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <cassert>

#define FOR(i,n) for(int i=0,_n=n;i<_n;i++)
#define FORR(i,s,n) for(int i=s,_n=n;i<_n;i++)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pli pair<ll,int>
#define vi vector<int>
#define fs first
#define sec second

#define maxn 100000

using namespace std;
typedef long long ll;

const ll MOD = 1000000007LL;

int main(){
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(t2<t1)swap(t1,t2);
    if(s==0)s=60;
    if(m==0)m=60;
    h*=5;
    t1*=5;
    t2*=5;
    if(t1 <= h && t1 < s && t1 <= m && t2>h && t2 > m && t2 > s){
        printf("YES\n");
        return 0;
    }
    if((t1 <= h && t2>h) || (t1 < s && t2> s) || (t1 <= m && t2>m)){
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
	return 0;
}
