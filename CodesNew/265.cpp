#include <bits/stdc++.h>

using namespace std;

int main() {
    //ifstream cin("in");
    //ofstream cout("out");

    int n, k;
    cin >> n >> k;

    vector<int> A(n, 0);
    vector<int> S(n, 0);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(i > 0) S[i] = S[i-1] + A[i];
        else S[i] = A[i];
    } 
    int res = 0;
    int i = 0, j = 0;
    while( j < n ) {
        int currSum = (S[j] - S[i] + A[i]);
        if(currSum <= k){
            res = max(res, j-i+1);
        } else {
            while(currSum > k){
                i++;
                currSum = (S[j] - S[i] + A[i]);
            }
            res = max(res, j-i+1);
        }
        j++;
    }

    cout << res << endl;



    return 0;
}