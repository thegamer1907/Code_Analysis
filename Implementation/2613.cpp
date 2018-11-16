#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,p,q,sol=0;
    cin >> n;
    while(n--){
        cin >> p >> q;
        sol += (q-p >= 2);
    }
    cout << sol << endl;
}