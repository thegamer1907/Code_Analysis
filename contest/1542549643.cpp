#include <iostream>
#include <cstdio>

using namespace std;

int N, K, freq[20];
int x;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE

    scanf("%d %d\n", &N, &K);

    for(int i = 1; i <= N; ++i) {
        int nr = 0;

        for(int j = 1; j <= K; ++j) {
            scanf("%d", &x);

            nr = nr * 2 + x;
        }

        freq[nr]++;
    }

    for(int i = 0; i < (1 << K); ++i) {
        for(int j = 0; j < (1 << K); ++j) {
            if(freq[i] && freq[j] && ((i & j) == 0)) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}

 		 		  			    	  			 	 	 		 		