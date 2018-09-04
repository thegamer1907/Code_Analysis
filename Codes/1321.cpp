#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int a, b;
    cin >> a >> b;
    vector<string> arr1, arr2;
    string temp;
    for(int i = 0; i < a; i++) {
        cin >> temp;
        arr1.push_back(temp);
    }
    sort(arr1.begin(), arr1.end());
    arr1.resize(distance(arr1.begin(), unique(arr1.begin(), arr1.end())));
    a = arr1.size();
    for(int i = 0; i < b; i++) {
        cin >> temp;
        arr2.push_back(temp);
    }
    sort(arr2.begin(), arr2.end());
    arr2.resize(distance(arr2.begin(), unique(arr2.begin(), arr2.end())));
    b = arr2.size();
    int count = 0;
    for(int i = 0; i < b; i++) {
        for(int j = 0; j < a; j++) {
            if(arr2[i] == arr1[j]) count++;
        }
    }
    if(count % 2) b--;
    cout << (a > b ? "YES":"NO") << endl;
    return 0;
}
