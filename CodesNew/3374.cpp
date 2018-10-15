#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int _max = 0, sum = m;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        if (num > _max)
            _max = num;
        sum += num;
    }
    int ans;
    if (sum % n == 0)
        ans = sum / n;
    else
        ans = sum / n + 1;
    cout << max(ans, _max) << " " << _max + m << endl;
}