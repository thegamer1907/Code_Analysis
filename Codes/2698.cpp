#include <bits/stdc++.h>

// By Rodz

using namespace std;

const int N = 1000007;
int phi[N];

void build(string& s) {
    phi[0] = phi[1] = 0;
    for (int i = 2; i <= s.size(); i++)
    {
        int j = phi[i-1];
        while (j and s[i-1] != s[j])
            j = phi[j];
        if (s[i-1] == s[j])
            phi[i] = j+1;
        else
            phi[i] = 0;
    }
}

int main() {
    string s;
    cin >> s;
    build(s);

    /* Encontro o maior match que esta no meio da string */
    int bestmid = 0;
    for (int i = 2; i < s.size(); i++)
        bestmid = max(bestmid, phi[i]);
    
    int j = phi[s.size()]; // j tem o maior match no final da string
    // phi[j] contem o tamanho do segundo maior match que termina no final da string
    // phi[phi[j]] conter o tamanho do terceiro maior match que termina no final da string
    // E assim vai...

    // Enquanto este match for maior que o maior match do meio, encontro o proximo match (menor que o atual) que termina no final da string
    while (j > bestmid) 
        j = phi[j];
    
    if (!j) cout << "Just a legend\n"; // Se j == 0, nao ha solucao
    else cout << s.substr(0, j) << '\n';
    return 0;
}