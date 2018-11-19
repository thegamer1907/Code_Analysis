#include "bits/stdc++.h"
using namespace std;

int cnt[33];

int main()
{
        int n, k;
        scanf("%d %d", &n, &k);
        for(int i = 0; i < n; i++) {
                int mask = 0;
                for(int j = 0; j < k; j++) {
                        int x;
                        scanf("%d", &x);
                        if(x) mask |= (1 << j);
                }
                //cout << mask << endl;
                cnt[mask]++;
        }
        for(int i = 0; i < 33; i++) for(int j = 0; j < 33; j++) {
                        if( cnt[i] && cnt[j] && (i & j)==0 ) {
                                puts("YES");
                                return 0;
                        }
                }

        puts("NO");
        return 0;
}
