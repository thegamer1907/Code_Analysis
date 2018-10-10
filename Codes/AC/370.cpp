#include <bits/stdc++.h>

using namespace std;

bool good(int x){
    int sum = 0;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    return sum == 10;
}

main()
{
    ios_base::sync_with_stdio(false);
    int k;
    cin >> k;
    for(int i = 1; ; i++){
        if(good(i)) k--;
        if(k == 0){
            cout << i << endl;
            exit(0);
        }
    }
}
