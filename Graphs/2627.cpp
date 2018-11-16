#include <iostream>
#include <algorithm>
#include <string.h>
#include <map>
#include <unordered_map>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <stdlib.h>

#define MAX 10001
using namespace std;

unordered_map<int, bool>m;
vector<int>v[MAX];
bool mark[MAX]={0};
int n;

void mark_all(int node) {
    mark[node]=true;
    for (const auto &i:v[node]) {
        if (!mark[i])
            mark_all(i);
    }
}

int main() {
    int n, a, c=0;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>a;
        v[i].push_back(a);
        v[a].push_back(i);
        m[a]=true;
    }
    for (const auto &i:m)
        if (!mark[i.first])
            mark_all(i.first), c++;
    cout<<c<<endl;
    return 0;
}

