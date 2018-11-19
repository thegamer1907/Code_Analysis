#include <bits/stdc++.h>
using namespace std;

#define eps 0

int main() {
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);

    vector<double> box;

    double hh = h * 30 + (double)(m * 60 + s) / 3600.0 * 30.0;
    box.push_back(hh);

    double mm = m * 6 + (double)s / 10.0;
    box.push_back(mm);

    double ss = s * 6;
    box.push_back(ss);

    for (int i = 0; i < box.size(); i++) {
        if (box[i] >= 360) {
            box[i] -= 360;
        }
    }

    sort(box.begin(), box.end());
    box.push_back(box[0] + 360);


    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            double a = t1 * 30 + dx * 360;
            double b = t2 * 30 + dy * 360;
            for (int i = 0; i < box.size() - 1; i++) {
                if(a + eps >= box[i] && a - eps <= box[i + 1] && b + eps >= box[i] && b - eps <= box[i + 1]) {
                    puts("YES");
                    return 0;
                }
            }
        }
    }

    puts("NO");
    return 0;
}