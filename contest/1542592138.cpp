#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cassert>
#include <memory.h>
using namespace std;
typedef long long ll;

vector<string> arr;
int main () {
    string bark;
    cin >> bark;
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        string str;
        cin >> str;
        arr.push_back(str);
    }
    
    for(int i=0;i<N;i++) {
        if(bark[0] == arr[i][0] && bark[1] == arr[i][1]) {
            cout << "YES";
            return 0;
        }
    }
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(bark[0] == arr[i][1] && bark[1] == arr[j][0]) {
                cout << "YES";
                return 0;
            }
            if(bark[0] == arr[j][1] && bark[1] == arr[i][0]) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    
    return 0;
}
