#include <iostream>

using namespace std;

int n, p[103], k, m;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int a; cin >> a;
        if(a == 1) {
            k++; 
            p[i] = p[i-1]+1;
        }
        else {
            p[i] = p[i-1];
        }   
    }
    for(int i = 0; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            m = max(m, k - p[j] + p[i] + j - i - p[j] + p[i]);
        }
    }
    cout << m << endl;
}