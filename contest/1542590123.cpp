#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    
    int h, m, s, a, b;
    cin >> h >> m >> s >> a >> b;
    a *= 5;
    b *= 5;
    a %= 60;
    b %= 60;
    if(b<a){
        int c = b;
        b = a;
        a = c;
    }
    //a < b
    h*=5;
    h%=60;
    h++;
    bool c1 = true;
    bool c2 = true;
    if(h>a && h<b){
        c1 = false;
    }
    else{
        c2 = false;
    }
    if((double)m+0.5>(double)a&& (double)m+0.5<(double)b){
        c1 = false;
    }
    else{
        c2 = false;
    }
    if(s>a && s<b){
        c1 = false;
    }
    else{
        c2 = false;
    }
    if(c1||c2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}