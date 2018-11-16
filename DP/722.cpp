#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    int nn, n = s.length(), x = 0;
    cin >> nn;
    
    vector<int> A(s.length(), 0);
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            x++;
        }
        A[i] = x;
    }

    while(nn--){
        int l, r;
        cin >> l >> r;
        l--, r--;
        if(A[(r)]-A[(l)] < 0)
            cout << 0 << endl;
        else
            cout << A[(r)]-A[(l)] << endl;
    }

    return 0;
}