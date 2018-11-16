#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, vector<int>> employees;
    queue<pair<int, int>> onTop;

    for (int i = 1; i < n + 1; ++i) {
        int p;
        cin >> p;
        
        if (p == -1) {
            onTop.push(make_pair(i, 1));
        } else if (employees.find(p) == employees.end()) {
            employees[p] = {i};
        } else {
            employees[p].push_back(i);
        }
    }

    int max_depth = 0;

    while (!onTop.empty()) {
        pair<int, int> emp = onTop.front();
        onTop.pop();

        max_depth = max(max_depth, emp.second);

        if (employees.find(emp.first) != employees.end()) {
            for (auto& sub: employees[emp.first]) {
                onTop.push(make_pair(sub, emp.second + 1));
            }
        }
    }

    cout << max_depth << endl;

    return 0;
}