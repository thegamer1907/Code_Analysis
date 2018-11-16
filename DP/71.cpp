#include <bits/stdc++.h>

using namespace std;


int main() {
    int num_of_boys, num_of_girls;

    cin >> num_of_boys;
    vector<int> boys(num_of_boys);
    for(int i = 0; i != num_of_boys; i++) cin >> boys[i];

    cin >> num_of_girls;
    vector<int> girls(num_of_girls);
    for(int i = 0; i != num_of_girls; i++) cin >> girls[i];

    sort(boys.begin(), boys.end()), sort(girls.begin(), girls.end());


    int arr[num_of_girls+1][num_of_boys+1];
    for(int i = 0; i < num_of_boys+1; i++) arr[0][i] = 0;
    for(int i = 0; i < num_of_girls+1; i++) arr[i][0] = 0;

    for(int i = 1; i < num_of_girls+1; i++) {
        for(int j = 1; j < num_of_boys+1; j++) {
            if(abs(girls[i-1]-boys[j-1]) > 1) arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            else {
                if(arr[i-1][j] == arr[i][j-1]) arr[i][j] = arr[i-1][j]+1;
                else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }

    cout << arr[num_of_girls][num_of_boys];

    return 0;
}
