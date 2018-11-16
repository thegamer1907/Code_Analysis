#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int scores[n], result=0, limit;

    for(int i=0; i<n; i++) cin >> scores[i];

    // sort(scores, scores+n, greater<int>());

    limit = scores[k-1];

    for(int i=0; i<n; i++){
        if(scores[i]==0 or scores[i]<limit) break;
        if(scores[i]>=limit) result++;
    }

    cout << result << endl;

    return 0;
}
