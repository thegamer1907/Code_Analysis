#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int n, m, min, max = -1;
    cin >> n >> m;
    vector<int>  v;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        if (x > max) max = x;
    }
    max += m;
    sort(v.begin(), v.end());
    int flag = 0;
    for (int i = 0; i < n-1; i++) {
        int dif = v[i+1] - v[i];
        if (dif > 0) {
            for(int j = 0; j < i+1; j++) {
                if (m < dif) {
                    v[j] += m;
                    min = v[v.size()-1];
                    cout << min << " " << max ;
                    return 0;
                }
                v[j] += dif;
                m-= dif;
            }
        }
    }
//    for (int i = 0; i < n ;i++) cout << v[i] << " ";
    cout << endl;
    if (m % n == 0) min = v[0] + m/n;
    else min = v[0] + m/n + 1;
    cout << min << " " << max;


}
