#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, k, result = 0, offset = 0, current = 0, x = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 0) break;
        if(x != current){
            result += offset;
            offset = 0;
            current = x;
            if(i >= k){
                break;
            }
        }
        offset++;
    }
    result += offset;
    cout << result;
    return 0;
}