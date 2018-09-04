#include <bits/stdc++.h>
using namespace std;

bool f(int t){
    int u = 0;
    while(t){
        u += t%10;
        t /= 10;
    }
    return u == 10;
}

int main(){
    int k;
    cin >> k;
    int t = 0;
    while (k){
        t++;
        if (f(t))
            k--;
    }

    cout << t;

    return 0;
}
