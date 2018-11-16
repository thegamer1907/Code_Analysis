#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int k = 0;
    while (n > 1){
        k += 1;
        n /= 2;
    }
    int cnt = 0;
    while (a != b){
        cnt++;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
    }
    if (cnt == k){
        cout << "Final!";
    }
    else{
        cout << cnt;
    }
}