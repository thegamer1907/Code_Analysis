#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <deque>
#include <string.h>
#include <bitset>
#include <math.h>

using namespace std;

#define PI atan2(0, -1)
#define epsilon 0.000000001
#define INF 5000000000000000000
#define MOD 1000000007

int N, M, freq [10000010], cumSum [10000010];
bool isPrime [10000010];

int main(){
    //freopen("sort.in", "r", stdin); freopen("sort.out", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout << fixed << setprecision(18);
    cin >> N; memset(freq, 0, sizeof(freq)); cumSum[0] = cumSum[1] = 0;
    memset(isPrime, true, sizeof(isPrime)); isPrime[0] = isPrime[1] = false;
    for(int i = 0; i < N; i++){
        int x; cin >> x;
        freq[x]++;
    }
    for(int i = 2; i <= 10000000; i++){
        cumSum[i] = cumSum[i-1];
        if(!isPrime[i]) continue;
        for(int j = 2*i; j <= 10000000; j += i){
            cumSum[i] += freq[j];
            isPrime[j] = false;
        }
        cumSum[i] += freq[i];
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        int a, b; cin >> a >> b;
        a = min(a, 10000000); b = min(b, 10000000);
        cout << cumSum[b]-cumSum[a-1] << '\n';
    }
    return 0;
}
