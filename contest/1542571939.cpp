#include<bits/stdc++.h>
using namespace std;

int n, k;
int arr[100005][5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n][k];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < k; i++) {
        int colSum = 0;
        for(int j = 0; j < n; j++) {
            colSum += arr[j][i];
        }

        if(colSum == n) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if(k == 1) {
        cout << "YES" << endl;
        return 0;
    }

    if(k == 2) {
        cout << "YES" << endl;
        return 0;
    }

    if(k == 3) {
        for(int i = 0; i < n; i++) {
            if((arr[i][0] + arr[i][1] + arr[i][2]) == 2) {

            }else if((arr[i][0] + arr[i][1] + arr[i][2]) == 3) {

            }else {
                cout << "YES" << endl;
                return 0;
            }
        }

        cout << "NO" << endl;
        return 0;
    }

    if(k == 4) {
        for(int i = 0; i < n; i++) {
            if((arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3]) < 2) {
                cout << "YES" << endl;
                return 0;
            }
        }

        int flag = 0;

        for(int i = 0; i < n; i++) { 
            if((arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3]) == 2) {
                flag = 1;
            }
        }

        if(flag) {
            int poss[3][2];

            poss[0][0] = 0;
            poss[0][1] = 0;
            poss[1][0] = 0;
            poss[1][1] = 0;
            poss[2][0] = 0;
            poss[2][1] = 0;

            for(int i = 0; i < n; i++) {
                if(arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 0 && arr[i][3] == 0) {
                    poss[0][0] = 1;
                }

                if(arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 1 && arr[i][3] == 1) {
                    poss[0][1] = 1;
                }

                if(arr[i][0] == 1 && arr[i][1] == 0 && arr[i][2] == 1 && arr[i][3] == 0) {
                    poss[1][0] = 1;
                }

                if(arr[i][0] == 0 && arr[i][1] == 1 && arr[i][2] == 0 && arr[i][3] == 1) {
                    poss[1][1] = 1;
                }

                if(arr[i][0] == 1 && arr[i][1] == 0 && arr[i][2] == 0 && arr[i][3] == 1) {
                    poss[2][0] = 1;
                }

                if(arr[i][0] == 0 && arr[i][1] == 1 && arr[i][2] == 1 && arr[i][3] == 0) {
                    poss[2][1] = 1;
                }
            }

            for(int i = 0; i < 3; i++) {
                if(poss[i][0] && poss[i][1]) {
                    cout << "YES "<< endl;
                    return 0;
                }
            }

            cout << "NO" << endl;
        }else {
            cout << "NO" << endl;
            return 0;
        }
    }
}