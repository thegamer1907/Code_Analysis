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
long long n, k,ans;
int a[100];
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if ((a[i]>=a[k-1]) && (a[i]>0)){
            ans++;
        }
    }
    cout << ans;
}