#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long n,a,b,k=0;
    cin >> n >> a >> b;
    while(a!=b) {
        a = (a - 1) / 2 + 1, b = (b - 1) / 2 + 1;
        k++;
    }
    if(k==(int)log2(n)){
        cout << "Final!";
    } else cout << k;
}
