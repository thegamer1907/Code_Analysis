#include <bits/stdc++.h>

using namespace std;
int h,m,s;

int main(){
    int t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12; m %= 60; s %= 60;
    t1 %= 12; t2 %= 12;
    vector<bool> move(12, 1); //can move from i to i+1

    move[h] = 0; move[m/5] = 0; move[s/5] = 0;
    move[(s-1 + 60)/5 % 12] = 0;

    if(s == 0){
        move[(m-1 + 60)/5 % 12] = 0;
        if(m == 0)
            move[(h - 1 + 12) % 12] = 0;
    }

    bool ok = true;
    for(int i = t1; i != t2 && ok; i = (i+1) % 12)
        if(!move[i])
            ok = false;

    if(!ok){

    ok = true;
    for(int i = t2; i != t1 && ok; i = (i+1) % 12)
        if(!move[i])
            ok = false;

    }

    cout << (ok ? "YES" : "NO") << endl;


    return 0;
}
