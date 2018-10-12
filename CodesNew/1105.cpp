#include <iostream>
#include <fstream>
#include <vector>

#define FOR(i, n) for (int i = 0; i < n; i++)

using namespace std;

bool Will_eat_half(long long k, long long n){
    long long eaten = 0, remaining = n;
    while (remaining > 0){
        eaten += min(k, remaining);
        remaining -= min(k, remaining);
        remaining -= remaining / 10;
    }
    return eaten * 2 >= n;
}

long long My_binary_search(long long n){
    long long min_index = 1, max_index = n;
    while (min_index != max_index){
        long long mid_index = (min_index + max_index) / 2;
        if (Will_eat_half(mid_index, n))
            max_index = mid_index;
        else
            min_index = mid_index + 1;
    }
    return min_index;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long n;
    cin >> n;
    cout << My_binary_search(n) << endl;
}
