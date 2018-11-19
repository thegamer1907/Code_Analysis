#include <bits/stdc++.h>
using namespace std;
const int limB = 13;
const int limP = 1<<limB;
const int limN = 205;

// int cnt[limB];
// bool bts[limB][limP];

void printaB(int i) {
    for(int b=limB-1; b>=0; b--) {
            printf("%d", (1<<b)&i? 1 : 0);
        }
        printf("\n");
}

struct combo {
    set <int> toto[limB];
    string sufo, prefo;
    int maxK() {
        for(int i=limB-1; i>=0; i--) {
            if((1<<(i+1)) == (int) toto[i].size())
                return i+1;
        }
        return 0;
    }
    void printa() {
        printf("Combo: %s %s\n", prefo.c_str(), sufo.c_str());
        for(int k=0; k<limB; k++) {
            printf("%d =>\n", k+1);
            for(const int b:toto[k])
                printaB(b);
        }
    }
    combo() {
    }
    combo(string S) {
        sufo = S;
        prefo = S;
        int N = S.size();
        for(int i=0; i<N; i++) {
            for(int j=0, b=0; i+j<N && j<limB; j++) {
                b *= 2;
                if(S[i+j]=='1')
                    b++;
                toto[j].insert(b);
            }
        }
    }
    combo(combo A, combo B) {
        if((int) B.sufo.size() >= limB)
            sufo = B.sufo;
        else
            sufo = A.sufo + B.sufo;
        if((int) A.prefo.size() >= limB)
            prefo = A.prefo;
        else
            prefo = A.prefo + B.prefo;
        if((int) sufo.size() >= limB)
            sufo = sufo.substr(sufo.size()-limB, limB);
        if((int) prefo.size() >= limB)
            prefo = prefo.substr(0, limB);
        
        for(int i=0; i<limB; i++) {
            toto[i] = A.toto[i];
            for(const int &w:B.toto[i])
                toto[i].insert(w);
        }

        string S = A.sufo + B.prefo;
        int N = S.size();
        for(int i=0; i<N; i++) {
            for(int j=0, b=0; i+j<N && j<limB; j++) {
                b *= 2;
                if(S[i+j]=='1')
                    b++;
                toto[j].insert(b);
            }
        }
    }
};

combo combos[limN];

int main() {
    int N, Q ;
    string strs[limN];

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> strs[i];
        combos[i] = combo(strs[i]);
    }

    cin >> Q;
    for(int i=0; i<Q; i++) {
        int a , b;
        cin >> a >> b;
        a--, b--;
        combos[i+N] = combo(combos[a], combos[b]);
        //combos[i+N].printa();
        printf("%d\n", combos[i+N].maxK());
    }
}
