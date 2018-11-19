#include <iostream>
#include <string>
using namespace std;

int main(){
    string check;
    int n, i, j;
    cin >> check >> n;
    string barks[n];

    for (i = 0; i < n; i++) {
        cin >> barks[i];
    }

    for (i = 0; i < n; i++) {
        if (barks[i] == check) {
            cout << "YES" << endl;
            return 0;
        }
        string reverse{barks[i][1], barks[i][0]};
        if (reverse == check) {
            cout << "YES" << endl;
            return 0;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            string one{barks[j][1], barks[i][0]};
            string two{barks[i][1], barks[j][0]};
            if (one == check){
                cout << "YES" << endl;
                return 0;
            } else if (two == check){
                cout << "YES" << endl;
                return 0;
            }
        }
        
    }
    cout << "NO" << endl;
    return 0;
}