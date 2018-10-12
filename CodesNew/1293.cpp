#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<int> arr;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    arr.resize(n);
    int ans = -1;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > i){
            arr[i] -= i;
        }
        else{
            ans = i;
            break;
        }
    }
    for (int i = 0; i < n; i++){
        arr[i] = (arr[i] - 1) / n + 1;
    }
    /*for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }*/
    if (ans == -1){
        int min0 = 1000000001;
        int minr = -1;
        for (int i = 0; i < n; i++){
            if (arr[i] < min0){
                min0 = arr[i];
                minr = i;
            }
        }
        cout << minr + 1<< endl;
    }
    else{
        cout << ans + 1<< endl;
    }

    return 0;
}
