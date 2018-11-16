#include <bits/stdc++.h>
#define sz(x) ((int)(x).size())
using namespace std;
int main(){
    int m,n;
    string an,borna;
    cin >> n >> m;
    cin >> an;
    for(int i=0;i<m;i++){
        borna = an;
        for(int j=0;j<n;j++){
            if(an[j]=='B' && j + 1 < n){
                if(an[j+1]=='G'){
                    borna[j]='G';
                    borna[j+1]='B';
                }
            }
        }
        an = borna;
    }
    cout << an;
    return 0;
}
