#include <iostream>
#include <vector>
using namespace std;

int arr [105]; 

int main(){
    int n, k; cin >> n >> k; 
    int max_num = 0; 
    int tot = 0; 
    for (int i=1; i<=n; i++){
        cin >> arr[i]; 
        tot += arr[i]; 
        max_num = max(max_num, arr[i]); 
    }
    // n * min_num - tot >= k
    int min_val = -1; 
    if ((tot + k) % n == 0){
        min_val = (tot + k) / n; 
    }
    else min_val = (tot + k) / n + 1; 
    min_val = max(min_val, max_num); 
    
    cout << min_val << ' ' << max_num + k << '\n';
    return 0; 
}