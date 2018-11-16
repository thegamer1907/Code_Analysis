#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string s;
int mina, maxa, minb, maxb;

int main() {
    cin >> s;
    mina = -1;
    minb = -1;
    maxb = -1;
    maxa = -1;
    for(int i = 0; i < int(s.size())-1; i++) {
        if(mina == -1 && s[i] == 'A' && s[i+1] == 'B') mina = i;
        if(s[i] == 'A' && s[i+1] == 'B') maxa = i;
        if(minb == -1 && s[i] == 'B' && s[i+1] == 'A') minb = i;
        if(s[i] == 'B' && s[i+1] == 'A') maxb = i;
    }
    //cout << mina << maxa << minb << maxb << endl;
    if((abs(mina - maxb) > 1  && mina != -1 && maxb != -1) || (abs(minb - maxa) > 1 && minb != -1 && maxa != -1)) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}