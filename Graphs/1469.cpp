#include <bits/stdc++.h>
using namespace std;

int n, t, m, e;

int main(){
    cin >> n >> t;
    m = 1;
    for(int i = 1; i < n; i++){
        cin >> e;
        if(m == i){
            m += e;
            if(m == t){
                cout << "YES";
                return 0;
            } else if (m > t){
                cout << "NO";
                return 0;
            }
        }
    }
}