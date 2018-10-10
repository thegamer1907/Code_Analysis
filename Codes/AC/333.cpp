#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 0x3f3f3f3f
#define all(v) (v).begin() , (v).end()

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main(){
    int n  , m , q , element;
    scanf("%d",&n);
    int arr[n] , starts[n] , ends[n];
    for(int i = 0 ;i < n ;i++){
        scanf("%d",&element);
        starts[i] = i == 0 ? 1 : ends[i-1]+1;
        ends[i] = starts[i] + element - 1;
    }
    scanf("%d",&m);
    while(m--){
        scanf("%d",&q);
        int ans = upper_bound(starts, starts+n , q)-starts;
        printf("%d\n",ans);
    }
}
