
#include<bits/stdc++.h>
using namespace std;
#define D(x)    cout << #x " = " <<(x) << endl
#define MAX     100000
typedef long long int LL;

int arr[MAX+5];
LL dp[25][MAX+5];

namespace F{
    LL cost = 0;
    int freq[MAX+5];
    int cur_l, cur_r;

    void add(int pos){
        if(!pos) return;
        freq[arr[pos]]++;
        cost += (freq[arr[pos]] << 1) - 1;
    }

    void rmv(int pos){
        if(!pos) return;
        cost -= (freq[arr[pos]] << 1) - 1;
        freq[arr[pos]]--;
    }


    LL query(int l, int r){
        while(cur_l < l){
            rmv(cur_l);
            cur_l++;
        }
        while(cur_l > l){
            cur_l--;
            add(cur_l);
        }
        while(cur_r < r){
            cur_r++;
            add(cur_r);
        }
        while(cur_r > r){
            rmv(cur_r);
            cur_r--;
        }

        return (cost - (r - l + 1))/2;
    }
}


void compute(int st, int ed, int optl, int optr, int k){
    if(st > ed) return;

    int mid = (st + ed)/2, idx = -1;
    for(int l = optl; l <= min(mid, optr); l++){
        if(dp[k-1][l-1] == numeric_limits<LL>::max()) continue;
        LL curr = dp[k-1][l-1] + F::query(l, mid);

        if(curr < dp[k][mid]){
            dp[k][mid] = curr;
            idx = l;
        }
    }

    if(st == ed) return;
    compute(st, mid - 1, optl, idx, k);
    compute(mid+1, ed, idx, optr, k);
}

int main()
{

    int i, k, n, x, idx;
    scanf("%d %d", &n, &k);
    for(i = 1; i <= n; i++) scanf("%d", &arr[i]);

    for(x = 0; x <= k; x++)
        for(idx = 0; idx <= n; idx++)
            dp[x][idx] = numeric_limits<LL>::max();

    dp[0][0] = 0;
    for(x = 1; x <= k; x++)
        compute(1, n, 1, n, x);

    cout << dp[k][n] << endl;
    return 0;
}

