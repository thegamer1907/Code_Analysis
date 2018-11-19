#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <tuple>
#include <functional>
#include <math.h>
#include <string.h>
#include <string>
#include <bitset>
#include <stdlib.h>
#include <time.h>

#define INF 999999999
#define INFLL 999999999999999

#define s1(x) scanf("%d", &x)
#define s2(x,y) scanf("%d %d",&x,&y)
#define s3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define p1(x) printf("%d\n", x)
#define p2(x,y) printf("%d %d\n",x,y)
#define p3(x,y,z) printf("%d %d %d\n",x,y,z)
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<int, ii> intii;
typedef pair<ii, int> iiint;
typedef pair<ii, ii> pii;
typedef tuple<int, int, int> iii;

/////////////////////////////////////////////////////

const int M = 10005;

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////



set<int> st;

int main(){
    int n,k; scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        int s = 0;
        for(int j=0;j<k;j++) {
            int a; scanf("%d", &a);
            if(a == 1) s += (1 << j);
        }
        st.insert(s);
    }
    
    if (st.count(0)) {puts("yes");return 0;}
    if(k==4){
        
        if (st.count(1) && st.count(2)) {puts("yes");return 0;}
        if (st.count(1) && st.count(4)) {puts("yes");return 0;}
        if (st.count(1) && st.count(8)) {puts("yes");return 0;}
        if (st.count(2) && st.count(4)) {puts("yes");return 0;}
        if (st.count(2) && st.count(8)) {puts("yes");return 0;}
        if (st.count(4) && st.count(8)) {puts("yes");return 0;}
        
        if (st.count(8) && st.count(3)) {puts("yes");return 0;}
        if (st.count(8) && st.count(5)) {puts("yes");return 0;}
        if (st.count(8) && st.count(6)) {puts("yes");return 0;}
        if (st.count(4) && st.count(3)) {puts("yes");return 0;}
        if (st.count(4) && st.count(9)) {puts("yes");return 0;}
        if (st.count(4) && st.count(10)) {puts("yes");return 0;}
        if (st.count(2) && st.count(5)) {puts("yes");return 0;}
        if (st.count(2) && st.count(9)) {puts("yes");return 0;}
        if (st.count(2) && st.count(12)) {puts("yes");return 0;}
        if (st.count(1) && st.count(6)) {puts("yes");return 0;}
        if (st.count(1) && st.count(10)) {puts("yes");return 0;}
        if (st.count(1) && st.count(12)) {puts("yes");return 0;}
        
        if (st.count(8) && st.count(7)) {puts("yes");return 0;}
        if (st.count(4) && st.count(11)) {puts("yes");return 0;}
        if (st.count(2) && st.count(13)) {puts("yes");return 0;}
        if (st.count(1) && st.count(14)) {puts("yes");return 0;}
        
        
        if (st.count(12) && st.count(3)) {puts("yes");return 0;}
        if (st.count(10) && st.count(5)) {puts("yes");return 0;}
        if (st.count(9) && st.count(6)) {puts("yes");return 0;}
    }
    
    if(k==3){
        if (st.count(4) && st.count(2)) {puts("yes");return 0;}
        if (st.count(4) && st.count(1)) {puts("yes");return 0;}
        if (st.count(2) && st.count(1)) {puts("yes");return 0;}
        
        if (st.count(4) && st.count(3)) {puts("yes");return 0;}
        if (st.count(2) && st.count(5)) {puts("yes");return 0;}
        if (st.count(1) && st.count(6)) {puts("yes");return 0;}
    }
    if(k==2){
        if (st.count(2) && st.count(1)) {puts("yes");return 0;}
        
    }
    
    
    
    puts("no");
    return 0;
}
