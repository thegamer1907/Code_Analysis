#include <bits/stdc++.h>
using namespace std;

const int OO = 0x3f3f3f3f ;
#define read(FILE)  freopen(FILE, "r", stdin);
#define write(FILE) freopen(FILE, "w", stdout);
#define BeatMeIFUCAN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n ,m ,arr[100005] ,x ;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n&&scanf("%d",arr+i);++i) arr[i] += arr[i-1] ;
    scanf("%d",&m);
    while(m--&&scanf("%d",&x)) printf("%d\n", lower_bound(arr,arr+n+1,x)-arr ) ;
    return 0;
}
