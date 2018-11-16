#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n;
    vector<int> boy(n);
    for (int i = 0; i < n; ++i)
        cin >> boy[i];
    cin >> m;
    vector<int> girl(m);
    for (int i = 0; i < m; ++i)
        cin >> girl[i];
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());
    vector<int>::iterator it_boy = boy.begin(), it_girl = girl.begin();
    while ((it_boy != boy.end()) && (it_girl != girl.end())){
        if (abs(*it_boy - *it_girl) <= 1){
            ++ans;
            ++it_boy;
            ++it_girl;
        }else{
            (*it_boy < *it_girl) ? ++it_boy : ++it_girl;
        }
    }
    cout << ans;
    return 0;
}
