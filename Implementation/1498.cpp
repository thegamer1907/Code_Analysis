#include <bits/stdc++.h>
using namespace std;


struct sama{
  char player;
  int banyaknya;
};

typedef struct sama SAMA;

int main(){
    char n[101];
    int i;
    SAMA pemain;
    SAMA maks;
    pemain.banyaknya = 1;
    maks.banyaknya = 0;
    gets(n);
    for(i=1; i<strlen(n); i++){
        if(n[i] == n[i-1]){
            if(i==1) {
                pemain.player = n[i];
                pemain.banyaknya = 2;
            }
            else{
                pemain.player = n[i];
                pemain.banyaknya = pemain.banyaknya + 1;
            }
        }
        else{
            pemain.player = n[i];
            pemain.banyaknya = 1;
        }
        if(i==1){
            maks.player = pemain.player;
            maks.banyaknya = pemain.banyaknya;
        }
        else{
            if(maks.banyaknya < pemain.banyaknya){
                maks.banyaknya = pemain.banyaknya;
                maks.player = pemain.player;
            }
        }
    }
    if(maks.banyaknya >= 7) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}