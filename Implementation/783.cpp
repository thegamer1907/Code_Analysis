#include <bits/stdc++.h>

using namespace std;

int main() {
    int len, time;
    cin>>len>>time;
    char arr[len];
    for (int i=0; i < len; i++) {
        cin>>arr[i];
    }
    for (int i=0; i < time; i++) {
        for (int j=1; j < len; j++ ) {
            if (arr[j-1] == 'B' && arr[j] == 'G') {
                arr[j-1] = 'G';
                arr[j] = 'B';
                j++;
            }
        }
    }
    for (int i =0; i < len; i++) {
        cout<<arr[i];
    }
    return 0;
}