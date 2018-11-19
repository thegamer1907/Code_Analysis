#include <cstdio>
#include <iostream>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <functional>
#include <set>
#include <vector>
#include <iomanip>
#include <cstring>
#include <queue>
#define ll long long int

using namespace std;

pair<int, pair<int, int>> items[21];
vector<int> track;
int n;
int vis[21] = {false};

int solve(int i, int time) { 
    int arr[21] = {0};
    if(time + items[i].first >= items[i].second.first) {
        return 0;
    }
    
    vis[i] = true;
    
    int curr = items[i].second.second;
    time += items[i].first;
    
    for(int j = 0; j < n; j++) {
        if(!vis[j]) {
            vis[j] = true;
            int nxt = solve(j, time);
            arr[j] = items[i].second.second + nxt;
            curr = max(curr, items[i].second.second + nxt);
            vis[j] = false;
        }
    }
    
    for(int j = 0; j < n; j++) {
        if(j == i) {
            continue;
        }
        
        if(curr == arr[j]) {
            track.push_back(j + 1);
        }
    }
    
    return curr;
}

int main(){
    string input;
    cin >> input;
    int n;
    cin >> n;
    string arr[101];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    for(int i = 0; i < n; i++) {
        if(arr[i][0] == input[0] && arr[i][1] == input[1]) {
            cout << "YES" << endl;
            return 0;
        }
        if(arr[i][0] == input[1] && arr[i][1] == input[0]) {
            cout << "YES" << endl;
            return 0;
        } else {
            if(arr[i][1] == input[0]) {
                bool found = false;
                for(int j = 0; j < n; j++) {
                    if(i == j) {
                        continue;
                    }
                    
                    if(arr[j][0] == input[1]) {
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}