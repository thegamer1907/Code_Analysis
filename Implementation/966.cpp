#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, time;
    string fila, aux;

    cin>>t>>time>>fila;
    aux = fila;
    while (time--) {
        for (int i = 1; i < t; i++) {
            if (aux[i] == 'G' && aux[i - 1] == 'B'){
                swap(fila[i], fila[i - 1]);
            }
        }
        aux = fila;
    }

    cout<<fila<<"\n";

    return 0;
}
