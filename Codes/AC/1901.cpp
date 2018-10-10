#include <bits/stdc++.h>

using namespace std;

map<int, vector<long long>> cont;

int main()
{
    ios_base::sync_with_stdio(false);
    int n ,k;
    cin >> n >> k;
    int *nums = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        auto iter = cont.find(nums[i] / k);
        vector<long long> temp(4, 0);
        temp[1] = 1;
        if (nums[i] % k == 0 && iter != cont.end()) {
            vector<long long>& list = iter->second;
            temp[2] = list[1];
            temp[3] = list[2];
        }
        iter = cont.find(nums[i]);
        if (iter == cont.end()) {
            cont.insert(make_pair(nums[i], temp));
        } else {
            iter->second[1] += temp[1];
            iter->second[2] += temp[2];
            iter->second[3] += temp[3];
        }
        ans += temp[3];
    }
    cout << ans;
    return 0;
}
