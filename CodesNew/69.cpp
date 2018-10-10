#include <iostream>
#include <vector>
#include <algorithm>

/* Vanya and Lanterns */

using namespace std;
int main() {
    long n_lamps, length;
    cin >> n_lamps >> length;
    vector<long> vec_lamp_pos(n_lamps);
    for (int i = 0; i < n_lamps; ++i) {
        cin >> vec_lamp_pos[i];
    }
    sort(vec_lamp_pos.begin(), vec_lamp_pos.end());
    double max_d = max(2*vec_lamp_pos[0], 2*(length - vec_lamp_pos[n_lamps - 1]));
    for (int j = 0; j < n_lamps - 1; ++j) {
        max_d = max(max_d, double(vec_lamp_pos[j+1] - vec_lamp_pos[j]));
    }
//    cout << max_d/2 << endl;
    printf("%.10f", max_d/2.0);
    return 0;
}
// 1538781605083
