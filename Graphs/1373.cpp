#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("in");
    //ofstream cout("out");

    int n, k;
    cin >> n >> k;
    vector<int> A(n, 0);

    for(int i = 0; i < n; i++) cin >> A[i];
    int i = 0;
    while(i < n){
        if(i+1 == k){
            cout << "YES" << endl;
            return 0;
        } else if(i+1 > k){
            cout << "NO" << endl;
            return 0;
        }

        i += (A[i]);

    }

    cout << "NO" << endl;

    return 0;
}