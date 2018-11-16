#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
#include <string>
#include <ctime>
#include <chrono>
#include <random>
#include <queue>
#include <iomanip>
using namespace std;

int n, t, res, sum, x, i;
int a[30000];

int main() {
    cin >> n >> t;
    for (int i = 1; i < n; i++){
        cin >> a[i];
    }
    i=1;
    while (x==0){
        int res=i+a[i];
        if (res==t){
            x=1;
        } else {
            if (res>t){
                x=2;
            }
        }
        i=i+a[i];
    }
    if (x==1){
        cout << "YES";
    } else {
        cout << "NO";
    }
}    