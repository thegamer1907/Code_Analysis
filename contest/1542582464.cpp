#include<bits/stdc++.h>
#define MAX_N 10000050
#define MOD_N 1000000007

typedef long long ll;

ll maximum(ll a,ll b){
    return a > b ? a : b;
}

ll minimum(ll a,ll b){
    return a < b ? a : b;
}

template<class T>
void print_array(T* arr,ll n){
    for(ll i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return;
}

int main(){
    std::ios::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL);
    ll h, m, s, t1, t2;
    std::cin >> h >> m >> s >> t1 >> t2;
    ll b1, b2;
    h = (h*5)%60;
    t1 = (t1*5)%60;
    t2 = (t2*5)%60;
    ll a, b, c;
    a = minimum(minimum(h, m), s);
    c = maximum(maximum(h, m), s);
    b = h + m + s - a - c;
    //std::cout << a << " " << b << " " << c << std::endl;
    if(a < t1 && t1 <= b){
        b1 = 1;
    }
    else if(b < t1 && t1 <= c){
        b1 = 2;
    }
    else{
        b1 = 3;
    }
    if(a < t2 && t2 <= b){
        b2 = 1;
    }
    else if(b < t2 && t2 <= c){
        b2 = 2;
    }
    else{
        b2 = 3;
    }
    //std::cout << b1 << " " << b2 << std::endl;
    std::cout << (b1 == b2 ? "YES" : "NO") << std::endl;
    return 0;
}

