#include <iostream>
using namespace std;

int a[105];

int main(){
    int maxi = -1, mini;
    int n, m;
    int sum = 0;
    cin >> n;
    cin >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxi = max(a[i], maxi);
        sum += a[i];
    }
    sum += m;
    mini = sum / n;
    if(mini * n < sum){
        mini++;
    }
    if(mini < maxi){
        mini = maxi;
    }
    cout << mini << " " << maxi+m;

    return 0;
}