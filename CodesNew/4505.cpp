#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k;
    cin >> n;
    vector <int> ken;
    for (int x; cin >> x;) ken.push_back(x);
    sort(ken.begin(), ken.end());
    k=0;
    for (int i=0; i<n; ++i){
        if (ken[i] >= 2*ken[k]) ++k;
    }
    cout << n-min(n/2, k);
    return 0;
}
