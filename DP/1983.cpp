#include <iostream>

using namespace std;

int isAvailable[100000];

int main () {
    int n, m;
    cin >> n >> m;
    int a[n];
    int l[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> l[i];
    }

    int distinctNumbers[n];
    isAvailable[a[n-1]] = 1;
    distinctNumbers[n-1] = 1;
    for(int i = n-2; i >= 0; i--) {
        if(isAvailable[a[i]] == 0){
            distinctNumbers[i] = distinctNumbers[i+1] + 1;
            isAvailable[a[i]] = 1;
        }
        else
            distinctNumbers[i] = distinctNumbers[i+1];
    }

    for(int i = 0;i < m;i++){
        cout << distinctNumbers[l[i] - 1] << endl;
    }

}
















