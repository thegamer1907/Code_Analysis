#include <bits/stdc++.h>
using namespace std;

string s;
int n, m, a, b, index;

void getVar(vector<int> &w, string &s) {
    for(int i=0; i < s.size(); i++) {
        int val = s[i] - '0';
        w[val] = max(w[val], 1);
        for(int j=i+1; j < s.size(); j++) {
            val = (val << 1) + (s[j] - '0');
            if(val > 9000)
                break;
            w[val] = max(w[val], j-i+1);
        }
    }
}

bool getMax(vector<int> &w, int cur) {
    int i=0, bits = 0;
    while(w[i] >= cur) {
        while(i >= (1 << (bits+1)) - 1)
            bits++;
        i++;
    }
    return bits >= cur;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n;
    vector< vector<int> > q(300, vector<int>(10000));
    vector< pair<string, string> > w(n);
    vector<int> maxes(300);
    for(int i=0; i < n; i++) {
        cin >> s;
        w[i].first = s;
        w[i].second = s;
        getVar(q[i], s);
    }
    index = n;

    cin >> m;
    for(int i=0; i < m; i++) {
        cin >> a >> b; a--; b--;
        string left = w[a].first;
        if(left.size() < 10) {
            left += w[b].first;
            left = left.substr(0, 10);
        }
        string right = w[b].second;
        if(right.size() < 10) {
            right = w[a].second + right;
            right = right.substr(max(0, (int)right.size()-10), 10);
        }
        w.push_back({left, right});
        string toFind = w[a].second + w[b].first;
        getVar(q[index], toFind);
        for(int i=0; i <= 9000; i++)
            q[index][i] = max(q[index][i], max(q[a][i], q[b][i]));

        int curMax = max(maxes[a], maxes[b]);
        while(getMax(q[index], curMax + 1))
            curMax++;
        maxes[index] = curMax;
        cout << curMax << endl;

        index++;
    }
}
