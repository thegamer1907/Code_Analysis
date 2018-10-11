#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie( 0 ); ios::sync_with_stdio(0);
    
    int A, B;
    string lee;
    int paridad = 0;
    unordered_set<string> compartidas;
    
    cin >> A >> B;
    for( int i = 0; i < A; i++ ){
        cin >> lee;
        compartidas.insert( lee );
    }
    
    for( int i = 0; i < B; i++ ){
        cin >> lee;
        if( compartidas.count(lee) )
            paridad++;
    }
    
    A -= paridad;
    B -= paridad;
    
    if( paridad & 1 )
        B--;
    
    if( A > B )
        cout << "YES\n";
    else
        cout << "NO\n";
    
    
    
    return 0;
}
