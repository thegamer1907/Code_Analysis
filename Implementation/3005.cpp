#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define MP make_pair
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int main(){
    int n;
    scanf("%d",&n);
    int c1=0,c2=0;
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)c1++;
        if(b>a)c2++;
    }
    if(c1>c2)printf("Mishka\n");
    if(c1==c2)printf("Friendship is magic!^^\n");
    if(c1<c2)printf("Chris\n");
    return 0;
}
