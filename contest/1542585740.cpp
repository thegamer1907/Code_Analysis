#include <bits/stdc++.h>


using namespace std;
// using namespace cpl;

template <class T>
T input_value(istream& input = cin) {
    T value;
    input >> value;
    return value;
}

template <typename T1, typename T2>
void print_iterable(T1 begin_iter, T2 end_iter) {
    cout << "[";
    for (; begin_iter != end_iter; ++begin_iter) {
        cout << *begin_iter << ", ";
    }
    cout << "]\n";
}

/****************************/
/*** SOLUTION STARTS HERE ***/
/****************************/

int const MAXN = 100002;
int const MAXK = 4;

int n, k;

struct Problem {
    vector<int> t;
    
    Problem () {}
    
    Problem (vector<int> &_t) {
        t = _t;
    }
};

bool operator< (Problem const &a, Problem const &b) {
    for (int i=0; i<k; ++i) {
        if (a.t[i] != b.t[i]) return a.t[i] < b.t[i];
    }
    return false;
}

set<Problem> problems;


int main() {
    ios_base::sync_with_stdio(false);
    
    cin >> n >> k;
    for (int i=0; i<n; ++i) {
        vector<int> t;
        for (int j=0; j<k; ++j) {
            int a;
            cin >> a;
            t.push_back(a);
        }
        problems.insert(Problem(t));
    }
    
    bool res = false;
    for (auto &x : problems) {
        for (auto &y : problems) {
            bool this_res = true;
            for (int i=0; i<k; ++i) {
                if (x.t[i] & y.t[i] == 1) this_res = false;
            }
            res = res || this_res;
        }
    }
    
    if (res) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}


