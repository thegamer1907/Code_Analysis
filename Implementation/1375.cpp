#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, t;

    // cin >> n >> t;
    scanf("%d %d", &n, &t);

    string fila;

    cin >> fila;

    char fim[fila.size()];

    int v = 0;

    for(int i=0 ; i<(int)fila.size() ; i++) fim[i] = fila[i];

    for(int i=0 ; i<t ; i++)
        for(int z=0 ; z<(int)fila.size()-1 ; z++)
            if(fim[z] == 'B' && fim[z+1] == 'G'){fim[z] = 'G'; fim[z+1] = 'B';z++;}

    for(int i=0 ; i<(int)fila.size() ; i++) cout << fim[i];

    cout << endl;

    return 0;
}