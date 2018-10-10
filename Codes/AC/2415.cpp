#include <bits/stdc++.h>

using namespace std;

//#define int long long
#define double long double

int n;
int a[1000100];
const int N = 1000000;
vector<char> prime(N, true);
vector<int> primes;
int mas[10000050];

main()
{
    ios_base::sync_with_stdio(0);
    for(int i = 2; i < N; i++){
        if(prime[i]){
            primes.push_back(i);
            if((long long)i * i < N) for(int j = i * i; j < N; j += i) prime[j] = false;
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int t = a[i];
        for(auto u: primes){
            if(u * u > t) break;
            if(t % u == 0){
                mas[u]++;
            }
            while(t % u == 0){
                t /= u;
            }
        }
        if(t > 1) mas[t]++;
    }
    for(int i = 1; i <= 10000000; i++){
        mas[i] += mas[i - 1];
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        l = min(l, 10000000);
        r = min(r, 10000000);
        cout << mas[r] - mas[l - 1] << endl;
    }
}
