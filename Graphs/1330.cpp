#include<iostream>
#include<vector>

using namespace std;

int main (){
    int n, t;
    cin >> n >> t;

    vector<int> portals (n-1);

    if (t > n){
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < n-1; i++){
        cin >> portals[i];
    }

    int current = 1;
    while (current <= n){
        current += portals[current-1];
        if (current > t){
            cout << "NO" << endl;
            return 0;
        }

        if (current == t){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}

// 1537558731204
