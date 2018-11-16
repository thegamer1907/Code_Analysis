#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int i;
    for (i = 0; i < k; i++){
        cin >> arr[i];
        if( arr[i] == 0){
            cout << i;
            return 0;
        }
    }

    int t = arr[k-1];
    for(i = k; i < n; i++){
        int temp;
        cin >> temp;
        if(temp != t){
            break;
        }
    }
    cout << i;


}