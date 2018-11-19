#include <bits/stdc++.h>
#define loop(i, a, n) for (int i = a; i < int(n); ++i)
using namespace std;

typedef pair<int, int> ii;

vector<int> create(int k){
    if (k == 0) return {0};
    vector<int> arr1 = create(k - 1), arr2 = arr1;
    for (auto& x : arr1) x = 2 * x;
    for (auto& x : arr2) x = 2 * x + 1;
    for (auto& x : arr2) arr1.push_back(x);
    return arr1;
}

vector<int> func(vector<string> in, int k, const vector<ii>& Q){
    int n = in.size();
    vector<int> all = create(k);
    vector<vector<bool>> arr(n + Q.size(), vector<bool>(all.size(), false));

    loop(i, 0, n) if ((int)in[i].size() >= k){
        int curr = 0;
        loop(t, 0, k) curr = 2 * curr + in[i][t] - '0';
        arr[i][curr] = true;
        loop(t, k, in[i].size()) arr[i][curr = (2 * curr + in[i][t] - '0') % (1<<k)] = true;
    }

    loop(p, 0, Q.size()){
        int x = Q[p].first, y = Q[p].second;
        vector<bool>& res = arr[n + p];
        loop(i, 0, res.size()) res[i] = arr[x][i] || arr[y][i];

        in.push_back("");
        string& adding = in.back();
        string save;
        for (auto& a : in[x]) adding.push_back(a);
        for (auto& a : in[y]) adding.push_back(a);
        while ((int)save.size() < k && (int)adding.size() > 0) save.push_back(adding.back()), adding.pop_back();
        while ((int)adding.size() > k) adding.pop_back();
        while((int)save.size() > 0) adding.push_back(save.back()), save.pop_back();

        int i1 = max(0, int(in[x].size() - k + 1)), i2 = k - in[x].size() + i1 - 1;
        if (i1 >= int(in[x].size()) || i2 >= int(in[y].size())) continue;
        int curr = 0;
        loop(t, i1, in[x].size()) curr = 2 * curr + in[x][t] - '0';
        loop(t, 0, i2) curr = 2 * curr + in[y][t] - '0';
        while (i1 < (int)in[x].size() && i2 < (int)in[y].size()){
            res[curr = (2 * curr + in[y][i2] - '0') % (1<<k)] = true;
            ++i1, ++i2;
        }
    }

    vector<int> ret(Q.size());
    loop(i, n, arr.size()){
        bool b = true;
        for (auto x : arr[i]) if (!x){
            b = false;
            break;
        }
        ret[i - n] = b;
    }

    return ret;
}

int main(){
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<string> arr(n);
    for (auto& x : arr) cin >> x;
    int m; cin >> m;
    vector<ii> Q(m);
    for (auto& p : Q) cin >> p.first >> p.second, --p.first, --p.second;

    vector<int> res(m, 0);
    loop(i, 1, 11){
        vector<int> temp = func(arr, i, Q);
        loop(k, 0, res.size()) if (res[k] == i - 1 && temp[k]) res[k] = i;
    }

    for (auto& x : res) cout << x << endl;
    return 0;
}
