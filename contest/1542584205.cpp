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

char passwd[10],temp_pass[10];

int main(){
    std::ios::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL);
    std::cin >> passwd;
    bool is_pass = false, can_pass1 = false, can_pass2 = false;
    ll t;
    std::cin >> t;
    while(t--){
        std::cin >> temp_pass;
        if(!strcmp(passwd, temp_pass)){
            is_pass = true;
        }
        if(temp_pass[1] == passwd[0]){
            can_pass1 = true;
        }
        if(temp_pass[0] == passwd[1]){
            can_pass2 = true;
        }
    }
    std::cout << (is_pass || (can_pass1 && can_pass2) ? "YES" : "NO") << std::endl;
    return 0;
}

