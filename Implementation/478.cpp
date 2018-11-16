#include <bits/stdc++.h>
using namespace std;

void vin(vector<int> &, int);

int main(void) {
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    vin(scores, n);

    int count = 0;

    for (auto score: scores)
        if ( score > 0 && score >= scores.at(k - 1) ) 
            count++;
    
    cout << count << endl;

    return 0;
}

void vin(vector<int> &v, int n) {
    int input;
    while(n--) {
        cin >> input;
        v.push_back(input);
    }
}
