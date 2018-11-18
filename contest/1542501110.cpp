#include <iostream>
using namespace std;
int main() {
    string p;
    int n;
    string arr[105];
    
    cin >> p >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i] == p) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
	bool f = false;
    for(int i=0; i<n; i++) {
        if(arr[i][1] == p[0]) {
            f = true;
			break;
        }
    }

    if(!f) {
        cout << "NO" << endl;
        return 0;
    }

    for(int i=0; i<n; i++) {
        if(p[1] == arr[i][0]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}