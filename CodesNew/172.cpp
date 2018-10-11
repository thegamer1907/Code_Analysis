#include <bits/stdc++.h>

#define F first
#define S second
#define MP make_pair
#define PB push_back

using namespace std;

typedef long long ll;
const int N = 1e6+10;
const int oo = 1e9;
const int PI = acos(-1);

int n,t;
int a[N];

int main() {

    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif

    cin >> n >> t;

    for(int i= 0 ;i < n ; i++){
        scanf("%d",a+i);
    }
    int ans = 0,sum=0;

    for(int l=0,r=0;r<n;r++){
        sum+=a[r];
        if(sum>t)sum-=a[l],l++;
        else ans = max(ans,r-l+1);
        //cout << l << " " << r << endl;
    }
    cout << ans;


    return 0;
}
