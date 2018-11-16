#include <iostream>
#include <vector>

using namespace std;

void solucion(int n, int t){
    vector<int> cells(n);
    int x;
    for(int i = 0; i < n-1; ++i){
        cin >> x;
        cells[i] = x;
    }
    int pos = 1;
    while(pos < t){
        pos += cells[pos-1];
    }
    if(pos == t) cout << "YES";
    else cout << "NO";
}

int main(){
    int n, t;
    cin >> n >> t;
    solucion(n,t);
    return 0;
}
