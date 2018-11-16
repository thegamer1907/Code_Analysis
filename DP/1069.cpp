#include<iostream>
using namespace std;

    int n, x, res = -1, sum, count;
    
main() { 
    cin >> n;
    while(n--) {
        cin >> x;
        sum += x;
        if(x) count -= (count != 0);
        else {
            count++;
            res = max(res, count);
        }
    }
    cout << res + sum;
}