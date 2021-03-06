/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author Harshad
 */

#include <iostream>
#include <fstream>

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class TaskB {
public:
    void solve(std::istream &in, std::ostream &out) {
        double h, m, s, t1, t2;
        in >> h >> m >> s >> t1 >> t2;
        h += (m / 60) + (s / 3600);
        m /= 5;
        m += (s / 3600);
        s /= 5;
        vector<double> arr(3);
        arr[0] = h;
        arr[1] = m;
        arr[2] = s;
        sort(arr.begin(), arr.end());
        bool flag = false;
        if ((t1 < arr[0] || t1 > arr[2]) && (t2 < arr[0] || t2 > arr[2])) {
            flag = true;
        } else if ((t1 < arr[1] && t1 > arr[0]) && (t2 < arr[1] && t2 > arr[0])) {
            flag = true;
        } else if ((t1 < arr[2] && t1 > arr[1]) && (t2 < arr[2] && t2 > arr[1]))
            flag = true;

        if (flag) out << "YES";
        else out << "NO";
    }
};


int main() {
    TaskB solver;
    std::istream &in(std::cin);
    std::ostream &out(std::cout);
    solver.solve(in, out);
    return 0;
}
