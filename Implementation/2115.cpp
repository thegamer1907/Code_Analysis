#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("in");
    //ofstream cout("out");
    int n;
    cin >> n;
    int A[n][3];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> A[i][j];

    for(int j = 0; j < 3; j++ ){
        int temp = 0;
        for(int i = 0; i < n; i++){
            temp += A[i][j];
        }
        if(temp != 0){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}