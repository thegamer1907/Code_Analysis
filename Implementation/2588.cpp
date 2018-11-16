#include<bits/stdc++.h>

using namespace std;

main(){
    int n,h,s=0;
    cin >> n >> h;
    while(n--){
        int x;
        cin >> x;
        if (x > h)
        s += 2;
        else s++;
    }
    cout << s;
}