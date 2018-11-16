#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    char x[n], temp;
    
    cin >> x;
    while(t--) {
        for(int i = 0; i < n-1; i++) {
            if(x[i] == 'B' && x[i+1] == 'G') {
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
                i++;
           }
        }
    }
    cout << x << endl;
    return 0;
}