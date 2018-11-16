#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int ara[n];
    for(int i = 0;i<n-1;i++)
        cin >> ara[i];
    int index = 1;
    bool flag = false;
    while(index < t) {
        index = index + ara[index-1];
        //cout << index << " " << ara[index-1] << endl;
        if(index == t){
            flag = true;
            //cout << endl;
            break;
        }
    }
    if(flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

















