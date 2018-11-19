#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k; cin >> n >> k;
    vector<int> arr(1 << k);
    for(int i = 00;i<n;i++){
        int x = 0;
        int off = 1;
        for(int j = 0;j<k;j++){
            int c; cin >> c;
            if(c) x += off;
            off += off;
        }
        arr[x] = 1;
    }


    bool ok = false;
    for(int i = 0;i< (1 << k);i++){
        //cerr << arr[i] << " ";
        for(int j = 0;j <= i;j++){
            int val = i&j;
            //cerr << i << " " << j << " " << val << " : " << arr[i] << " " << arr[j] << endl;
            if(arr[i] && arr[j] && (val == 0))
                ok = true;
        }
}
    cout << (ok ? "YES" : "NO") << endl;


    return 0;
}
