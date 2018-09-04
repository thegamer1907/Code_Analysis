#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
int n, m;

bool check(int x){
    int t = 0;
    while (x > 0){
        t += x%10;
        x /= 10;
    }
    return t == 10;
}

int main(){
    cin >> n;
    m = 0;
    while (n > 0){
        if (check(++m)) n--;
    }
    cout << m << endl;
    return 0;
}