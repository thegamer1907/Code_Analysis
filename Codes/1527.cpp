#include <iostream>
#include <algorithm>
using namespace std;

int v[100010];
long long n, s;

bool verif(int x){
    long long aux[100010];
    for(int i = 0; i < n; ++ i){
      aux[i] = 1LL*v[i] + 1LL*(i+1)*x;
    }

    sort(aux, aux+n);
    long long sum = 0;
    for(int i = 0; i < x; ++ i){
        sum += aux[i];
    }

    return sum <= s;
}
int main(){
    cin >> n >> s;
    for(int i = 0 ; i < n ;++ i){
        cin >> v[i];
    }

    long long best = 0, nowsum = 0;
    int step = 32-__builtin_clz((unsigned)n);
    for(step; step >= 0; --step){
        if(best+(1<<step) <= n && verif(best+(1<<step))){
            best += (1<<step);
        }
    }

    long long aux[100010];
    for(int i = 0; i < n ;++ i){
      aux[i] = 1LL*v[i] + 1LL*(i+1)*best;
    }

    sort(aux, aux+n);

    for(int i = 0; i < best; ++ i){
      nowsum += aux[i];
    }

    cout << best << " " << nowsum;
    return 0;
}
