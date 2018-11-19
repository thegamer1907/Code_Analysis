#include <bits/stdc++.h>
using namespace std;

int arr[30][3];

int main(){
    //printf("%d\n", 'a');
    int n;
    string mn, t;

    cin >> mn;
    cin >> n;

    bool flag = false;

    while(n--){
        cin >> t;

        if(t == mn) flag = true;

        int id = t[0] - 97;
        arr[id][1] = 1;

        id = t[1] - 97;
        arr[id][2] = 1;
    }

    if(flag){
        cout << "YES" << endl;
        return 0;
    }

    int id1 = mn[0] - 97;
    int id2 = mn[1] - 97;

    if(arr[id1][2] == 1 && arr[id2][1] == 1){
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}
