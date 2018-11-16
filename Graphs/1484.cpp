#include <bits/stdc++.h>
using namespace std;
long long a[200005];
map <long long,long long> mapa;
int main(){
    long long n,t;
    cin >> n >> t;
    for(long i = 1; i < n; i++){
        cin >> a[i];
    }
    long long poz = 1;
    while(true){
        if(mapa.count(poz)){
            cout << "NO" << endl;
            break;
        }
        if(poz == t){
            cout << "YES" << endl;
            break;
        }
        ///cout << poz << endl;
        mapa[poz] = 1;
        poz = a[poz] + poz;
    }
}
