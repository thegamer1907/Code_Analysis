#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0, k = 0;
    
    cin >> n >> k;
    
    vector<int> scores;

    int input = 0;
    for (int i = 0; i < n; i++) {
        cin >> input;
        scores.push_back(input);
    }

    int kScore = scores[k - 1];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] != 0 && scores[i] >= kScore) ans++;
    }
    
    cout << ans;
    
    return 0;
}
