#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        scores.push_back(x);
    }
    int cnt=0;
    int defaultScore = scores.at(k-1);
    for(int i=0; i<n; i++){
        if(scores[i] >= defaultScore && scores[i]> 0)
            cnt++;
    }
    cout << cnt;
}
