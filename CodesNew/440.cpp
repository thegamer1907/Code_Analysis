#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <stack>
#include <map>
#include <queue>
//#define max 100000
using namespace std;

map<int, int> mp;
map<int, int>::iterator it;

int main(int argc, const char * argv[]) {
    int n,t;
    cin >> n >> t;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int s;
        cin >> s;
        v.push_back(s);
    }
    //sort(a, a+n);
    int ans=0,sum=0,l=0,sol=0;
    int ss=v[l++];
    //sum=v[0];
    for (int i=0; i<v.size(); i++) {
        sum+=v[i];
        if (sum>t) {
            sum=sum-ss;
            ss=v[l++];
        }
        ans=i-(l-1)+1;
        sol=max(sol, ans);
    }
    cout << sol << endl;
    return 0;
}