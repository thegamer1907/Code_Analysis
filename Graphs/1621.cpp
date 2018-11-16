#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, t, i, y;
    //int a[100];
    vector <int> v;


    cin >> n >> t;

    for(i = 0; i < n - 1; i++){
        //cin >> a[i];
        cin >> y;
        v.push_back(y);
    }
    if(t >= n){
        cout << "YES";
        return 0;
    }

    for(i = 0; i < n - 1; i++){
        if((i + v[i]) == t - 1){
            cout << "YES";
            return 0;
        }
        else{
            i = i + v[i] - 1;
        }
    }

    cout << "NO";




    return 0;
}
